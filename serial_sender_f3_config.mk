# Name: f3_config.mk
# Author: Lucas Haug
# ThundeRatz Robotics Team
# 11/2019

DEVICE_FAMILY  := STM32F3xx
DEVICE_TYPE    := STM32F303xx
DEVICE_DEF     := STM32F303xE
DEVICE         := STM32F303RE

# Linker script file without .ld extension
# Find it on cube folder after code generation
DEVICE_LD_FILE := STM32F303RETx_FLASH
