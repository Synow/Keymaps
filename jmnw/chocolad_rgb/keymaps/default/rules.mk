BOOTLOADER = atmel-dfu
TAP_DANCE_ENABLE = yes
LTO_ENABLE = yes
SPLIT_KEYBOARD = yes
EXTRAKEY_ENABLE = yes
OLED_DRIVER_ENABLE = no
RGBLIGHT_ENABLE = yes
COMBO_ENABLE = no
# Load the necessary support files
# ifeq ($(strip $(OLED_DRIVER_ENABLE)), yes)
# 	SRC += oled.c
# endif
MOUSEKEY_ENABLE = yes       # Mouse keys
NKRO_ENABLE = yes           # Enable N-Key Rollover
CAPS_WORD_ENABLE = yes
