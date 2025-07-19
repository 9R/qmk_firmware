ifeq ($(strip $(LED_INDICATORS)), yes)
    OPT_DEFS += -DLED_INDICATORS
    SRC += status_leds.c
endif

ifeq ($(strip $(RGB_INDICATORS)), yes)
    OPT_DEFS += -DRGB_INDICATORS
    SRC += status_rgb.c
endif

ifeq ($(strip $(OLED_ENABLE)), yes)
    SRC += oled.c
endif

ifeq ($(strip $(OLED_ROTATE180)), yes)
    OPT_DEFS += -DOLED_ROTATE180
endif

ifeq ($(strip $(THUMBSTICK_ENABLE)), yes)
    OPT_DEFS += -DTHUMBSTICK_ENABLE
    SRC += thumbstick.c
    ANALOG_DRIVER_REQUIRED = yes
endif
