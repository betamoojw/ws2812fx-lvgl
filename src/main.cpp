/**
 * # LVGL Porting Example
 *
 * The example demonstrates how to port LVGL(v8). And for RGB LCD, it can enable the avoid tearing function.
 *
 * ## How to Use
 *
 * To use this example, please firstly install the following dependent libraries:
 *
 * - lvgl (>= v8.3.9, < v9)
 *
 * Then follow the steps below to configure:
 *
 * Follow the steps below to configure:
 *
 * 1. For **ESP32_Display_Panel**:
 *
 *     - Follow the [steps](https://github.com/esp-arduino-libs/ESP32_Display_Panel#configuring-drivers) to configure drivers if needed.
 *     - If using a supported development board, follow the [steps](https://github.com/esp-arduino-libs/ESP32_Display_Panel#using-supported-development-boards) to configure it.
 *     - If using a custom board, follow the [steps](https://github.com/esp-arduino-libs/ESP32_Display_Panel#using-custom-development-boards) to configure it.
 *
 * 2. For **lvgl**:
 *
 *     - Follow the [steps](https://github.com/esp-arduino-libs/ESP32_Display_Panel#configuring-lvgl) to add *lv_conf.h* file and change the configurations.
 *     - Modify the macros in the [lvgl_port_v8.h](./lvgl_port_v8.h) file to configure the LVGL porting parameters.
 *
 * 3. Navigate to the `Tools` menu in the Arduino IDE to choose a ESP board and configure its parameters. For supported
 *    boards, please refter to [Configuring Supported Development Boards](https://github.com/esp-arduino-libs/ESP32_Display_Panel#configuring-supported-development-boards)
 * 4. Verify and upload the example to your ESP board.
 *
 * ## Serial Output
 *
 * ```bash
 * ...
 * LVGL porting example start
 * Initialize panel device
 * Initialize LVGL
 * Create UI
 * LVGL porting example end
 * IDLE loop
 * IDLE loop
 * ...
 * ```
 *
 * ## Troubleshooting
 *
 * Please check the [FAQ](https://github.com/esp-arduino-libs/ESP32_Display_Panel#faq) first to see if the same question exists. If not, please create a [Github issue](https://github.com/esp-arduino-libs/ESP32_Display_Panel/issues). We will get back to you as soon as possible.
 *
 */

#include <Arduino.h>
#include <ESP_Panel_Library.h>
#include <lvgl.h>
#include "lvgl_port_v8.h"
#include <WS2812FX.h>

#include "ui/ui.h"

#include "FS.h"
#include "FFat.h"
#include <ArduinoJson.h>

/* inbuilt LED on VIEWE display 4.0" */
// #define LED_COUNT 1
// #define LED_PIN 42

/* external */
#define LED_COUNT 60
#define LED_PIN 46

#define FLASH FFat


struct Preset
{
  bool set;
  uint8_t mode;
  uint8_t brightness;
  uint32_t color;
  long speed;
  lv_obj_t *button;
  lv_obj_t *text;
};

unsigned long last;
bool newData = false;

WS2812FX ws2812fx = WS2812FX(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

DynamicJsonDocument local(2048);

Preset presets[12] = {
    {.set = true, .mode = 0, .brightness = 100, .color = RED, .speed = 1000, .button = NULL, .text = NULL},
    {.set = true, .mode = 1, .brightness = 100, .color = GREEN, .speed = 1000, .button = NULL, .text = NULL},
    {.set = true, .mode = 2, .brightness = 100, .color = BLUE, .speed = 1000, .button = NULL, .text = NULL},
    {.set = true, .mode = 13, .brightness = 200, .color = CYAN, .speed = 1000, .button = NULL, .text = NULL},
    {.set = true, .mode = 14, .brightness = 150, .color = PINK, .speed = 1000, .button = NULL, .text = NULL},
    {.set = true, .mode = 15, .brightness = 200, .color = ORANGE, .speed = 1000, .button = NULL, .text = NULL},
    {.set = true, .mode = 16, .brightness = 50, .color = PURPLE, .speed = 1000, .button = NULL, .text = NULL},
    {.set = true, .mode = 19, .brightness = 100, .color = MAGENTA, .speed = 1000, .button = NULL, .text = NULL},
    {.set = true, .mode = 23, .brightness = 100, .color = YELLOW, .speed = 1000, .button = NULL, .text = NULL},
    {.set = true, .mode = 26, .brightness = 100, .color = CYAN, .speed = 1000, .button = NULL, .text = NULL},
    {.set = true, .mode = 44, .brightness = 100, .color = BLUE, .speed = 1000, .button = NULL, .text = NULL},
    {.set = true, .mode = 45, .brightness = 100, .color = PURPLE, .speed = 1000, .button = NULL, .text = NULL},
};

void readData()
{
  String result;
  // Open the file in read mode
  File file = FLASH.open("/ws2812fx.json", FILE_READ);

  if (file)
  {
    // Read data from the file and store it in the result variable
    while (file.available())
    {
      result += (char)file.read();
    }
    file.close();
    // Debug print the result

    deserializeJson(local, result);
  }
}

void writeData()
{
  String data;
  serializeJson(local, data);

  File file = FLASH.open("/ws2812fx.json", FILE_WRITE);
  if (file)
  {
    // Write data to the file
    int s = file.print(data);
    file.flush();
    file.close();
  }
}

void savePresets()
{
  for (int i = 0; i < 12; i++)
  {
    local["presets"][i]["mode"] = presets[i].mode;
    local["presets"][i]["brightness"] = presets[i].brightness;
    local["presets"][i]["speed"] = presets[i].speed;
    local["presets"][i]["color"] = presets[i].color;
  }
}

void readPresets()
{
  if (local.containsKey("presets"))
  {
    JsonArray arr = local["presets"].as<JsonArray>();
    for (int i = 0; i < arr.size(); i++)
    {
      if (i >= 12)
      {
        break;
      }
      JsonObject obj = arr[i].as<JsonObject>();
      presets[i].mode = obj["mode"].as<uint8_t>();
      presets[i].brightness = obj["brightness"].as<uint8_t>();
      presets[i].speed = obj["speed"].as<long>();
      presets[i].color = obj["color"].as<uint32_t>();
    }
  }
  else
  {
    savePresets();
  }
}

void onModeSelect(lv_event_t *e)
{
  lv_obj_t *obj = (lv_obj_t *)lv_event_get_target(e);
  uint16_t sel = lv_dropdown_get_selected(obj);
  ws2812fx.setMode(sel);
}

void onBrightnessChange(lv_event_t *e)
{
  lv_obj_t *slider = (lv_obj_t *)lv_event_get_target(e);
  int32_t v = lv_slider_get_value(slider);
  // ws2812fx.setBrightness(v); /* causes esp32 to reboot. (library issue) */
}
void onSpeedChange(lv_event_t *e)
{
  lv_obj_t *slider = (lv_obj_t *)lv_event_get_target(e);
  int32_t v = lv_slider_get_value(slider);
  ws2812fx.setSpeed(v);
}

void onColorChange(lv_event_t *e)
{
  lv_obj_t *obj = lv_event_get_target(e);
  lv_color_t c = lv_colorwheel_get_rgb(obj);
  ws2812fx.setColor(lv_color_to32(c));
}

void onInfoClicked(lv_event_t *e)
{
  lv_obj_add_flag(ui_infoPanel, LV_OBJ_FLAG_HIDDEN);
  local["info"] = true;
  newData = true;
}

void onSavePresets(lv_event_t * e)
{
  lv_obj_clear_flag(ui_infoPanel, LV_OBJ_FLAG_HIDDEN);
  writeData();
  delay(2000);
  ESP.restart();
}

void onPresetClick(lv_event_t *e)
{
  lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t *target = lv_event_get_target(e);
  if (event_code == LV_EVENT_CLICKED)
  {
    int index = (int)lv_event_get_user_data(e);

    if (!presets[index].set)
    {
      return;
    }
    ws2812fx.setMode(presets[index].mode);
    ws2812fx.setColor(presets[index].color);
    // ws2812fx.setBrightness(presets[index].brightness); /* causes esp32 to reboot. (library issue) */
    ws2812fx.setSpeed(presets[index].speed);

    lv_colorwheel_set_rgb(ui_color, lv_color_hex(presets[index].color));
    lv_dropdown_set_selected(ui_modeSelect, presets[index].mode);
    // lv_slider_set_value(ui_brightness, presets[index].brightness, LV_ANIM_ON);
    lv_slider_set_value(ui_speed, presets[index].speed, LV_ANIM_ON);

    local["current"] = index;

    newData = true;
  }

  if (event_code == LV_EVENT_LONG_PRESSED)
  {
    int index = (int)lv_event_get_user_data(e);
    presets[index].mode = ws2812fx.getMode();
    presets[index].color = ws2812fx.getColor();
    // presets[index].brightness = ws2812fx.getBrightness(); /* causes esp32 to reboot. (library issue) */
    presets[index].speed = ws2812fx.getSpeed();

    lv_obj_set_style_bg_color(presets[index].button, lv_color_hex(presets[index].color), LV_PART_MAIN | LV_STATE_DEFAULT);
    String text = String(ws2812fx.getModeName(presets[index].mode)) + "\n" + presets[index].brightness + "\n" + presets[index].speed;
    lv_label_set_text(presets[index].text, text.c_str());

    savePresets();
    newData = true;
  }
}

void addPresetButton(Preset preset, int index)
{
  presets[index].button = lv_btn_create(ui_presetPanel);
  lv_obj_set_width(presets[index].button, 100);
  lv_obj_set_height(presets[index].button, 50);
  lv_obj_set_align(presets[index].button, LV_ALIGN_CENTER);
  lv_obj_add_flag(presets[index].button, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
  lv_obj_clear_flag(presets[index].button, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
  lv_obj_set_style_radius(presets[index].button, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_color(presets[index].button, lv_color_hex(preset.color), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_opa(presets[index].button, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_radius(presets[index].button, 0, LV_PART_MAIN | LV_STATE_PRESSED);
  lv_obj_set_style_bg_color(presets[index].button, lv_color_hex(0x333333), LV_PART_MAIN | LV_STATE_PRESSED);
  lv_obj_set_style_bg_opa(presets[index].button, 255, LV_PART_MAIN | LV_STATE_PRESSED);

  String text = String(ws2812fx.getModeName(preset.mode)) + "\n" + preset.brightness + "\n" + preset.speed;

  presets[index].text = lv_label_create(presets[index].button);
  lv_obj_set_width(presets[index].text, 85);
  lv_obj_set_height(presets[index].text, LV_SIZE_CONTENT); /// 1
  lv_obj_set_align(presets[index].text, LV_ALIGN_CENTER);
  lv_label_set_long_mode(presets[index].text, LV_LABEL_LONG_CLIP);
  lv_label_set_text(presets[index].text, text.c_str());
  lv_obj_set_style_text_font(presets[index].text, &ui_font_sony20, LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_event_cb(presets[index].button, onPresetClick, LV_EVENT_ALL, (void *)index);
}

void setup()
{
  String title = "LVGL porting example";

  Serial.begin(115200);
  Serial.println(title + " start");

  if (!FLASH.begin())
  {
    // Timber.e("FFat Mount Failed");
    FLASH.format();
  }

  readData();
  readPresets();

  ws2812fx.init();
  ws2812fx.setBrightness(255);
  ws2812fx.setSpeed(1000);
  ws2812fx.setColor(RED);
  ws2812fx.setMode(FX_MODE_STATIC);
  ws2812fx.start();

  if (local.containsKey("current"))
  {
    int c = local["current"].as<uint8_t>();
    if (c >= 12)
    {
      c = 0;
    }
    ws2812fx.setMode(presets[c].mode);
    ws2812fx.setColor(presets[c].color);
    // ws2812fx.setBrightness(presets[c].brightness);
    ws2812fx.setSpeed(presets[c].speed);
  }

  Serial.println("Initialize panel device");
  ESP_Panel *panel = new ESP_Panel();
  panel->init();
#if LVGL_PORT_AVOID_TEAR
  // When avoid tearing function is enabled, configure the RGB bus according to the LVGL configuration
  ESP_PanelBus_RGB *rgb_bus = static_cast<ESP_PanelBus_RGB *>(panel->getLcd()->getBus());
  rgb_bus->configRgbFrameBufferNumber(LVGL_PORT_DISP_BUFFER_NUM);
  rgb_bus->configRgbBounceBufferSize(LVGL_PORT_RGB_BOUNCE_BUFFER_SIZE);
#endif
  panel->begin();

  Serial.println("Initialize LVGL");
  lvgl_port_init(panel->getLcd(), panel->getTouch());

  Serial.println("Create UI");
  /* Lock the mutex due to the LVGL APIs are not thread-safe */
  lvgl_port_lock(-1);

  /* Create a simple label */
  // lv_obj_t *label = lv_label_create(lv_scr_act());
  // lv_label_set_text(label, title.c_str());
  // lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);

  ui_init();

  lv_obj_clean(ui_presetPanel);

  for (int i = 0; i < 12; i++)
  {
    addPresetButton(presets[i], i);
  }

  String modes;
  for (int i = 0; i < ws2812fx.getModeCount() - 8; i++)
  {
    String name = ws2812fx.getModeName(i);
    modes += name;
    if (i < ws2812fx.getModeCount() - 9)
    {
      modes += "\n";
    }
  }

  lv_dropdown_set_options(ui_modeSelect, modes.c_str());
  lv_colorwheel_set_rgb(ui_color, lv_color_hex(ws2812fx.getColor()));
  lv_dropdown_set_selected(ui_modeSelect, ws2812fx.getMode());
  lv_slider_set_value(ui_brightness, ws2812fx.getBrightness(), LV_ANIM_ON);
  lv_slider_set_value(ui_speed, ws2812fx.getSpeed(), LV_ANIM_ON);

  if (local.containsKey("info") && local["info"].as<bool>())
  {
    lv_obj_add_flag(ui_infoPanel, LV_OBJ_FLAG_HIDDEN);
  }
  lv_obj_add_flag(ui_infoPanel, LV_OBJ_FLAG_HIDDEN);

  lv_label_set_text(ui_infoText, "Due to a bug with display when saving data, "
                                "the ESP32 will be restarted after saving presets data."
                                "You will need to longpress on the WS2812FX logo to save presets.");

  /* Release the mutex */
  lvgl_port_unlock();

  Serial.println(title + " end");

}

void loop()
{
  ws2812fx.service();

  if (millis() > last + 10000)
  {
    last = millis() + 10000;
    if (newData)
    {
      newData = false;
      // writeData();
    }
  }
}
