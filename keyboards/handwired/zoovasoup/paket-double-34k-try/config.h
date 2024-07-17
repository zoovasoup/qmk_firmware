#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0341
#define DEVICE_VER      0x0001
#define MANUFACTURER    zoovasoup
#define PRODUCT         paket-double-34k
#define DESCRIPTION     34-keys-split

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { B1, B3, B2, B6 }
#define MATRIX_COL_PINS { C6, D7, E6, B4, B5 }
#define UNUSED_PINS

/*#define MATRIX_ROW_PINS_RIGHT { B1, B3, B2, B6 }*/
/*#define MATRIX_COL_PINS_RIGHT { C6, D7, E6, B4, B5 }*/
/**/
/**/
/*#define MATRIX_ROW_PINS_LEFT { B1, B3, B2, B6 }*/
/*#define MATRIX_COL_PINS_LEFT { C6, D7, E6, B4, B5 }*/

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 0
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

/*split keyboard stuff*/
#define MASTER_LEFT
#define USE_I2C

#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif
