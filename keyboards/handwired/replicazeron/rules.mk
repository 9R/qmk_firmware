JOYSTICK_ENABLE = yes
OLED_ENABLE = yes

# rgb indicator
RGB_INDICATORS = yes

# led indicators. do not enable this at the same time as RGBINDICATORS
LED_INDICATORS = no

THUMBSTICK_ENABLE = yes

LTO_ENABLE = yes

SRC += state.c

VPATH += keyboards/handwired/replicazeron/common

# redirect compilation against "handwired/replicazeron" to the stm32 variant
DEFAULT_FOLDER = handwired/replicazeron/stm32f103

