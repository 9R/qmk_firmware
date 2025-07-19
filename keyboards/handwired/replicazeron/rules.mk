JOYSTICK_ENABLE = yes
OLED_ENABLE = yes

THUMBSTICK_ENABLE = yes

LTO_ENABLE = yes

SRC += state.c

VPATH += keyboards/handwired/replicazeron/common

# rotate oled display by 180° if necessary
OLED_ROTATE180 = no
