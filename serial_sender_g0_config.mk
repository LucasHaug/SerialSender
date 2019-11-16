# Name: g0_config.mk
# Author: Lucas Haug
# ThundeRatz Robotics Team
# 11/2019

DEVICE_FAMILY  := STM32G0xx
DEVICE_TYPE    := STM32G071xx
DEVICE_DEF     := STM32G071xx
DEVICE         := STM32G071RB

# Linker script file without .ld extension
# Find it on cube folder after code generation
DEVICE_LD_FILE := STM32G071RBTx_FLASH
