# Name: Makefile_STM
# Author: Daniel Nery Silva de Oliveira
# ThundeRatz Robotics Team
# 06/2019

# Cube file name without .ioc extension
PROJECT_NAME = serial_sender_g0
VERSION := 1

TARGET_BOARD := target_$(PROJECT_NAME)_$(VERSION)

# Device configs
ifeq ($(PROJECT_NAME), serial_sender_g0)
include serial_sender_g0_config.mk
else ifeq ($(PROJECT_NAME), serial_sender_f3)
include serial_sender_f3_config.mk
else
$(error Unknown Device)
endif

# Lib dir
LIB_DIR  := lib

# Cube Directory
CUBE_DIR := cube

# Config Files Directory
CFG_DIR := cfg

# Tests Directory
TEST_DIR := tests

# Default values, can be set on the command line or here
DEBUG   ?= 1
VERBOSE ?= 0
TEST    ?= 0
