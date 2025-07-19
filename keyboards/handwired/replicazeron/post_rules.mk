ifeq ($(strip $(LED_INDICATORS)), yes)
    OPT_DEFS += -DLED_INDICATORS
    SRC += status_leds.c
endif

ifeq ($(strip $(RGB_INDICATORS)), yes)
    OPT_DEFS += -DRGB_INDICATORS
endif

ifeq ($(strip $(OLED_ENABLE)), yes)
    SRC += oled.c
endif

ifeq ($(strip $(THUMBSTICK_ENABLE)), yes)
    OPT_DEFS += -DTHUMBSTICK_ENABLE
    SRC += thumbstick.c
    ANALOG_DRIVER_REQUIRED = yes
endif
