/* Change USB Polling Rate to 1000hz and a larger keys per scan for elite gaming*/
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12

#define RGB_DISABLE_WHEN_USB_SUSPENDED true
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200 // limits maximum brightness of LEDs to 200 out of 255. If not defined maximum brightness is set to 255

#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR 
#define RGB_MATRIX_STARTUP_HUE 0
#define RGB_MATRIX_STARTUP_SAT 0
#define RGB_MATRIX_STARTUP_VAL 160 // Sets the default brightness value, if none has been set
