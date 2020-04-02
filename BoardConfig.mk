#
# Copyright (C) 2020 The LineageOS Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

DEVICE_PATH := device/vivo/y67

# Architecture
TARGET_ARCH := arm64
TARGET_ARCH_VARIANT := armv8-a
TARGET_CPU_ABI := arm64-v8a
TARGET_CPU_ABI2 :=
TARGET_CPU_VARIANT := cortex-a53

TARGET_2ND_ARCH := arm
TARGET_2ND_ARCH_VARIANT := armv7-a-neon
TARGET_2ND_CPU_ABI := armeabi-v7a
TARGET_2ND_CPU_ABI2 := armeabi
TARGET_2ND_CPU_VARIANT := cortex-a53

BOARD_FLASH_BLOCK_SIZE := 4096

# Audio
USE_CUSTOM_AUDIO_POLICY := 1
BOARD_USES_MTK_AUDIO := true
#USE_XML_AUDIO_POLICY_CONF := 1 //使用旧版音频政策格式

# Bootloader
TARGET_NO_BOOTLOADER := true

# Bluetooth
BOARD_HAVE_BLUETOOTH := true
BOARD_BLUETOOTH_BDROID_HCILP_INCLUDED := 0
BOARD_CONNECTIVITY_MODULE := conn_soc
BOARD_BLUETOOTH_BDROID_BUILDCFG_INCLUDE_DIR := $(DEVICE_PATH)/bluetooth

# Camera and Codecs
BOARD_GLOBAL_CFLAGS += -DMETADATA_CAMERA_SOURCE
media.stagefright.legacyencoder=true
media.stagefright.less-secure=true

ifeq ($(HOST_OS),linux)
    ifeq ($(TARGET_BUILD_VARIANT),user)
        WITH_DEXPREOPT ?= true
    endif
endif

# Display
USE_OPENGL_RENDERER := true
NUM_FRAMEBUFFER_SURFACE_BUFFERS := 3
TARGET_RUNNING_WITHOUT_SYNC_FRAMEWORK := true
TARGET_FORCE_HWC_FOR_VIRTUAL_DISPLAYS := true
MAX_VIRTUAL_DISPLAY_DIMENSION := 1
PRESENT_TIME_OFFSET_FROM_VSYNC_NS := 0
MTK_HWC_SUPPORT := yes
MTK_HWC_VERSION := 1.5.0

# Fingerprint
MTK_FINGERPRINT_SUPPORT := yes

# FSTAB
TARGET_RECOVERY_FSTAB := $(DEVICE_PATH)/rootdir/fstab.mt6755

# GPS
USE_PREBUILD_GPS_BLOB := yes

# Include
TARGET_SPECIFIC_HEADER_PATH := $(DEVICE_PATH)/include

# Kernel informations
BOARD_KERNEL_BASE := 0x40078000
BOARD_KERNEL_PAGESIZE := 2048
BOARD_KERNEL_CMDLINE := bootopt=64S3,32N2,64N2 enforcing=0 androidboot.selinux=permissive
BOARD_MKBOOTIMG_ARGS := --board 1465391499 --ramdisk_offset 0x04f88000 --second_offset 0x00e88000 --tags_offset 0x03f88000
TARGET_USES_64_BIT_BINDER := true
TARGET_PREBUILT_KERNEL := $(DEVICE_PATH)/prebuilt/kernel

$(shell mkdir -p $(OUT)/obj/KERNEL_OBJ/usr)

BOARD_BOOTIMAGE_PARTITION_SIZE := 16777216
BOARD_RECOVERYIMAGE_PARTITION_SIZE := 32777216
BOARD_CACHEIMAGE_FILE_SYSTEM_TYPE := ext4
BOARD_CACHEIMAGE_PARTITION_SIZE := 402984832
BOARD_SYSTEMIMAGE_FILE_SYSTEM_TYPE := ext4
BOARD_SYSTEMIMAGE_PARTITION_SIZE := 3029848320
BOARD_USERDATAIMAGE_FILE_SYSTEM_TYPE := ext4
BOARD_USERDATAIMAGE_PARTITION_SIZE := 32879521280
BOARD_FLASH_BLOCK_SIZE := 4096

TARGET_USERIMAGES_USE_EXT4 := true
TARGET_USERIMAGES_USE_F2FS := true

# Mediatek support
BOARD_HAS_MTK_HARDWARE := true
BOARD_USES_MTK_HARDWARE := true
MTK_MEDIA_PROFILES := true
BOARD_USES_MTK_MEDIA_PROFILES := true
USE_CAMERA_STUB := true

# Media
TARGET_HAS_LEGACY_CAMERA_HAL1 := true
TARGET_OMX_LEGACY_RESCALING := true
BOARD_USES_LEGACY_MTK_AV_BLOB := true
TARGET_CAMERASERVICE_CLOSES_NATIVE_HANDLES := true
TARGET_PROVIDES_CAMERA_HAL := true
USE_DEVICE_SPECIFIC_CAMERA := true

# Misc
EXTENDED_FONT_FOOTPRINT := true

# MTK Project
MTK_PROJECT_CONFIG ?= $(DEVICE_PATH)/ProjectConfig.mk
include $(MTK_PROJECT_CONFIG)

MTK_INTERNAL_CDEFS := $(foreach t,$(AUTO_ADD_GLOBAL_DEFINE_BY_NAME),$(if $(filter-out no NO none NONE false FALSE,$($(t))),-D$(t)))
MTK_INTERNAL_CDEFS += $(foreach t,$(AUTO_ADD_GLOBAL_DEFINE_BY_VALUE),$(if $(filter-out no NO none NONE false FALSE,$($(t))),$(foreach v,$(shell echo $($(t)) | tr '[a-z]' '[A-Z]'),-D$(v))))
MTK_INTERNAL_CDEFS += $(foreach t,$(AUTO_ADD_GLOBAL_DEFINE_BY_NAME_VALUE),$(if $(filter-out no NO none NONE false FALSE,$($(t))),-D$(t)=\"$($(t))\"))
BOARD_GLOBAL_CFLAGS += $(MTK_INTERNAL_CDEFS)
BOARD_GLOBAL_CPPFLAGS += $(MTK_INTERNAL_CDEFS)

# OTA
BLOCK_BASED_OTA := true

# Platform
TARGET_BOARD_PLATFORM := mt6755
TARGET_BOOTLOADER_BOARD_NAME := y67

# Recovery allowed devices
TARGET_OTA_ASSERT_DEVICE := y67,pd1612,PD1612MD,PD1612CMD

# Recovery
TARGET_USERIMAGES_USE_EXT4 := true

# Release Tools
TARGET_RELEASETOOLS_EXTENSIONS := $(DEVICE_PATH)

# RIL
BOARD_RIL_CLASS := $(DEVICE_PATH)/ril

# Sensors
TARGET_NEEDS_PLATFORM_TEXT_RELOCATIONS := true
TARGET_NO_SENSOR_PERMISSION_CHECK := true

# SELinux
BOARD_SEPOLICY_DIRS += $(DEVICE_PATH)/sepolicy
POLICYVERS := 29

# Symbols
TARGET_LDPRELOAD += libmtk_symbols.so

# System
TARGET_SYSTEM_PROP += $(DEVICE_PATH)/system.prop

# Twrp
ifeq ($(TARGET_RECOVERY_VERSION), twrp)
TW_INCLUDE_L_CRYPTO := false
TW_CRYPTO_USE_SYSTEM_VOLD := false
TW_DEFAULT_BRIGHTNESS := 30
TW_EXCLUDE_TWRPAPP := true
TW_MAX_BRIGHTNESS := 255
TW_THEME := portrait_hdpi
TW_DEFAULT_LANGUAGE := zh_CN
TW_EXTRA_LANGUAGES := true
TW_USE_TOOLBOX := true
RECOVERY_SDCARD_ON_DATA := true
TW_EXCLUDE_SUPERSU := true
RECOVERY_GRAPHICS_USE_LINELENGTH := true
TW_INTERNAL_STORAGE_PATH := "/data/media"
TW_INTERNAL_STORAGE_MOUNT_POINT := "data"
PRODUCT_COPY_FILES += $(DEVICE_PATH)/rootdir/recovery/etc/twrp.fstab:recovery/root/etc/twrp.fstab
#用官方的vold解密官方系统加密的data
ifeq ($(TW_CRYPTO_USE_SYSTEM_VOLD),true)
PRODUCT_COPY_FILES += \
    $(LOCAL_PATH)/rootdir/recovery/system/bin/vold:recovery/root/system/bin/vold
endif
endif

# Wireless
WPA_SUPPLICANT_VERSION := VER_0_8_X
BOARD_HOSTAPD_DRIVER := NL80211
BOARD_HOSTAPD_PRIVATE_LIB := lib_driver_cmd_mt66xx
BOARD_WPA_SUPPLICANT_DRIVER := NL80211
BOARD_WPA_SUPPLICANT_PRIVATE_LIB := lib_driver_cmd_mt66xx
WIFI_DRIVER_FW_PATH_PARAM := /dev/wmtWifi
WIFI_DRIVER_FW_PATH_AP := AP
WIFI_DRIVER_FW_PATH_STA := STA
WIFI_DRIVER_FW_PATH_P2P := P2P