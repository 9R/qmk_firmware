JOYSTICK_ENABLE = yes
OLED_ENABLE = yes

LEDS_ENABLE = yes
THUMBSTICK_ENABLE = yes

LTO_ENABLE = yes

SRC += state.c

VPATH += keyboards/handwired/replicazeron/common

# redirect compilation against "handwired/replicazeron" to the stm32 variant
#DEFAULT_FOLDER = handwired/replicazeron/stm32f103
DEFAULT_FOLDER = handwired/replicazeron/rp2040

# add below lines for rp2040
WS2812_DRIVER = vendor
ANALOG_DRIVER_REQUIRED = yes
