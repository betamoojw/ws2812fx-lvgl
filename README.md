# WS2812FX-LVGL

Bring your WS2812FX LED effects to life with an intuitive LVGL-based UI, designed for the Viewe 4.0” Display. This project combines stunning lighting effects with a sleek interface to make controlling your LED strips a breeze.

![screenshot](screenshot.png?raw=true "screenshot")

## Features

	•	Easy Integration: Seamlessly combines the WS2812FX library with an LVGL-based user interface.
	•	Preset Management: Quickly switch between modes or return to your saved favorites.
	•	Customization:
	•	Adjust Mode, Brightness, Speed, and Color directly from the display.
	•	Save new presets by long pressing any button after configuring your desired settings.
	•	Hardware Support:
	•	On the Viewe 4.0 Board, the inbuilt LED is supported.
	•	Alternatively, connect an external WS2812 LED strip for a larger light show.

## Bugs and Workarounds

1. Brightness Adjustment Bug

	•	Issue: Adjusting brightness while running reboots the ESP32.
	•	Cause: A bug with the WS2812FX library and Arduino-ESP32 core v3.
	•	Workaround: Do not adjust brightness after setup(). Reference: Issue [#356](https://github.com/kitesurfer1404/WS2812FX/issues/356)

2. Pixel Shift on Display When Saving Presets

	•	Issue: Saving preset data to flash causes the display to shift pixels vertically.
	•	Solution:
	•	Save presets only by long pressing the WS2812FX logo.
	•	This will trigger an intentional reboot of the ESP32 to avoid pixel shifting.

## Dependencies

	•	WS2812FX Library: [`kitesurfer1404/WS2812FX`](https://github.com/kitesurfer1404/WS2812FX)
	•	Viewe 4.0” Display: [`Viewe 4.0 Product Page`](https://viewedisplay.com/product/esp32-4-inch-tft-display-touch-screen-arduino-lvgl/)

## Getting Started

	1.	Clone the repository.
	2.	Connect your Viewe 4.0 Board or external LED strip.
	3.	Customize and control your LED effects via the LVGL-based UI.
	4.	Long press to save your favorite settings and let the party begin!

Light up your projects and make them shine with WS2812FX and LVGL! 🎉