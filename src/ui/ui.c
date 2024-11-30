// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: WS2812FX

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_ws2812fx
void ui_ws2812fx_screen_init(void);
lv_obj_t *ui_ws2812fx;
void ui_event_modeSelect( lv_event_t * e);
lv_obj_t *ui_modeSelect;
void ui_event_brightness( lv_event_t * e);
lv_obj_t *ui_brightness;
void ui_event_speed( lv_event_t * e);
lv_obj_t *ui_speed;
void ui_event_color( lv_event_t * e);
lv_obj_t *ui_color;
lv_obj_t *ui_presetPanel;
void ui_event_buttonPreset( lv_event_t * e);
lv_obj_t *ui_buttonPreset;
lv_obj_t *ui_buttonText;
void ui_event_buttonPreset1( lv_event_t * e);
lv_obj_t *ui_buttonPreset1;
lv_obj_t *ui_buttonText1;
void ui_event_buttonPreset2( lv_event_t * e);
lv_obj_t *ui_buttonPreset2;
lv_obj_t *ui_buttonText2;
void ui_event_buttonPreset3( lv_event_t * e);
lv_obj_t *ui_buttonPreset3;
lv_obj_t *ui_buttonText3;
void ui_event_buttonPreset4( lv_event_t * e);
lv_obj_t *ui_buttonPreset4;
lv_obj_t *ui_buttonText4;
void ui_event_buttonPreset5( lv_event_t * e);
lv_obj_t *ui_buttonPreset5;
lv_obj_t *ui_buttonText5;
void ui_event_buttonPreset6( lv_event_t * e);
lv_obj_t *ui_buttonPreset6;
lv_obj_t *ui_buttonText6;
void ui_event_buttonPreset7( lv_event_t * e);
lv_obj_t *ui_buttonPreset7;
lv_obj_t *ui_buttonText7;
void ui_event_buttonPreset8( lv_event_t * e);
lv_obj_t *ui_buttonPreset8;
lv_obj_t *ui_buttonText8;
void ui_event_buttonPreset9( lv_event_t * e);
lv_obj_t *ui_buttonPreset9;
lv_obj_t *ui_buttonText9;
void ui_event_buttonPreset10( lv_event_t * e);
lv_obj_t *ui_buttonPreset10;
lv_obj_t *ui_buttonText10;
void ui_event_buttonPreset11( lv_event_t * e);
lv_obj_t *ui_buttonPreset11;
lv_obj_t *ui_buttonText11;
void ui_event_logo( lv_event_t * e);
lv_obj_t *ui_logo;
lv_obj_t *ui_speedText;
lv_obj_t *ui_brightnessText;
lv_obj_t *ui_modeText;
lv_obj_t *ui_presetText;
lv_obj_t *ui_colorText;
lv_obj_t *ui_infoPanel;
lv_obj_t *ui_infoText;
void ui_event_infoButton( lv_event_t * e);
lv_obj_t *ui_infoButton;
lv_obj_t *ui_infoBtnText;
lv_obj_t *ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_modeSelect( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      onModeSelect( e );
}
}
void ui_event_brightness( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_RELEASED) {
      onBrightnessChange( e );
}
}
void ui_event_speed( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_RELEASED) {
      onSpeedChange( e );
}
}
void ui_event_color( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_RELEASED) {
      onColorChange( e );
}
}
void ui_event_buttonPreset( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onPresetClick( e );
}
}
void ui_event_buttonPreset1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onPresetClick( e );
}
}
void ui_event_buttonPreset2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onPresetClick( e );
}
}
void ui_event_buttonPreset3( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onPresetClick( e );
}
}
void ui_event_buttonPreset4( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onPresetClick( e );
}
}
void ui_event_buttonPreset5( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onPresetClick( e );
}
}
void ui_event_buttonPreset6( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onPresetClick( e );
}
}
void ui_event_buttonPreset7( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onPresetClick( e );
}
}
void ui_event_buttonPreset8( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onPresetClick( e );
}
}
void ui_event_buttonPreset9( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onPresetClick( e );
}
}
void ui_event_buttonPreset10( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onPresetClick( e );
}
}
void ui_event_buttonPreset11( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onPresetClick( e );
}
}
void ui_event_logo( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_LONG_PRESSED) {
      onSavePresets( e );
}
}
void ui_event_infoButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      onInfoClicked( e );
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_ws2812fx_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_ws2812fx);
}
