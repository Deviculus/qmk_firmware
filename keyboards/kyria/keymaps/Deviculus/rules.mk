VPATH += keyboards/gboards

OLED_DRIVER_ENABLE = yes  	# Enables the use of OLED displays | 1392 bytes w/o oled.c
ENCODER_ENABLE = no       	# Enables the use of one or more encoders
RGBLIGHT_ENABLE = yes     	# Enable keyboard RGB underglow | 2226 w/o Animation
WPM_ENABLE = no				# Enable tracking of WPM 
SPLIT_KEYBOARD = yes		# Enable defining of master side
KEY_OVERRIDE_ENABLE = yes	# Enables Key Overrides | 886 bytes w/o key_overrides.c
COMBO_ENABLE = yes			# Use Combos | 2302
MOUSEKEY_ENABLE = yes		# Use Mouse Functions
EXTRAKEY_ENABLE = yes		# Audio Control and System Conrol
LTO_ENABLE=yes				# Save Space

LEADER_ENABLE = no			# Enables Leader Key usage
BOOTMAGIC_ENABLE = no		#
TAP_DANCE_ENABLE				=	no	  	# Enables the tap dance feature
DYNAMIC_MACRO_ENABLE			=	no 		# Enables dynamic macros
COMMAND_ENABLE					=	no 		# Commands for debug and configuration
AUDIO_ENABLE					=	no		# Enables any onboard speakers
KEY_LOCK_ENABLE					=	no
CONSOLE_ENABLE					=	no
VELOCIKEY_ENABLE				=	no
STENO_ENABLE					=	no
TERMINAL_ENABLE					=	no
GRAVE_ESC_ENABLE				=	no
SPACE_CADET_ENABLE				=	no