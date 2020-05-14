#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x4256
#define DEVICE_VER      0x0400
#define MANUFACTURER    Adkarta
#define PRODUCT         Adkarta MK1
#define DESCRIPTION     Split 50 percent ergonomic keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { B6, B2, B3, B1, F7 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D4 }
#define MATRIX_ROW_PINS_RIGHT { B6, B2, B3, B1, F7 }
#define MATRIX_COL_PINS_RIGHT { B5, B4, E6, D7, C6, D4 }
#define MASTER_LEFT

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0