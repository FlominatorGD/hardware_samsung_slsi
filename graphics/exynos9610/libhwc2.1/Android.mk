# Copyright (C) 2008 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

ifndef TARGET_SOC_BASE
	TARGET_SOC_BASE := $(TARGET_SOC)
endif

LOCAL_SRC_FILES += \
	../../$(TARGET_SOC_BASE)/libhwc2.1/libdevice/ExynosDeviceModule.cpp \
	../../$(TARGET_SOC_BASE)/libhwc2.1/libmaindisplay/ExynosPrimaryDisplayModule.cpp \
	../../$(TARGET_SOC_BASE)/libhwc2.1/libresource/ExynosMPPModule.cpp \
	../../$(TARGET_SOC_BASE)/libhwc2.1/libresource/ExynosResourceManagerModule.cpp	\
	../../$(TARGET_SOC_BASE)/libhwc2.1/libexternaldisplay/ExynosExternalDisplayModule.cpp \
	../../$(TARGET_SOC_BASE)/libhwc2.1/libvirtualdisplay/ExynosVirtualDisplayModule.cpp \
	../../$(TARGET_SOC_BASE)/libhwc2.1/libdisplayinterface/ExynosDisplayFbInterfaceModule.cpp
