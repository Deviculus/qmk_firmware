#pragma once

#
#ifdef RGBLIGHT_ENABLE
  //#define RGBLIGHT_ANIMATIONS // 3500 bytes
  // #define RGBLIGHT_EFFECT_BREATHING //864 bytes
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
  #define RGBLIGHT_SLEEP
#endif

// Allows media codes to properly register in macros and rotary encoder code
#define TAP_CODE_DELAY 10

#define COMBO_TERM 15

#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY

// Define if using homerow mods
//#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

// Define if using Force Hold for thumb or homerow mods
#define TAPPING_FORCE_HOLD
#define TAPPING_FORCE_HOLD_PER_KEY


// Set the mouse settings to a comfortable speed/accuracy trade-off
// Assume the screen refresh rate is 60 Htz or higher
#define MK_COMBINED
#define MOUSEKEY_DELAY 100                   // default: 300. Let's try and make this as low as possible while keeping the cursor responsive
#define MOUSEKEY_INTERVAL 16                 // default: 50. This makes the mouse ~3 times faster and more accurate
//#define MOUSEKEY_MOVE_DELTA 25                // default: 25
#define MOUSEKEY_MAX_SPEED 5                 // default: 10
#define MOUSEKEY_TIME_TO_MAX 0                  // default: 20. Since we made the mouse about 3 times faster with the previous setting,
                                       // give it more time to accelerate to max speed to retain precise control over short distances.

#define MOUSEKEY_WHEEL_DELAY 100             // It makes sense to use the same delay for the mouseweel
#define MOUSEKEY_WHEEL_INTERVAL 50              // default: 100
#define MOUSEKEY_WHEEL_MAX_SPEED 8              // default: 8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100          // default: 40

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

