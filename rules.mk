# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes     # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes	# Mouse keys
EXTRAKEY_ENABLE = yes	# Audio control and System control
CONSOLE_ENABLE =  no	# Console for debug
COMMAND_ENABLE = no    # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no  # [Crawlpad] Custom backlighting code is used, so this should not be enabled
AUDIO_ENABLE = no # [Crawlpad] This can be enabled if a speaker is connected to the expansion port. Not compatible with RGBLIGHT below
RGBLIGHT_ENABLE = yes # [Crawlpad] This can be enabled if a ws2812 strip is connected to the expansion port.
ENCODER_ENABLE = no # [2Key2crawl] Make the knobs turn
