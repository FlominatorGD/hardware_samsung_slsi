LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE_TAGS := optional

LOCAL_SRC_FILES := \
	Exynos_OMX_Basecomponent.c \
	Exynos_OMX_Baseport.c

LOCAL_MODULE := libExynosOMX_Basecomponent
ifeq ($(BOARD_USES_VENDORIMAGE), true)
LOCAL_PROPRIETARY_MODULE := true
endif

LOCAL_CFLAGS :=

LOCAL_STATIC_LIBRARIES := libExynosOMX_OSAL
LOCAL_SHARED_LIBRARIES := libcutils libutils

LOCAL_C_INCLUDES := \
	$(EXYNOS_OMX_INC)/exynos \
	$(EXYNOS_OMX_TOP)/osal \
	$(EXYNOS_VIDEO_CODEC)/include

ifeq ($(BOARD_USE_KHRONOS_OMX_HEADER), true)
LOCAL_CFLAGS += -DUSE_KHRONOS_OMX_HEADER
LOCAL_C_INCLUDES += $(EXYNOS_OMX_INC)/khronos
else
ifeq ($(BOARD_USE_ANDROID), true)
LOCAL_HEADER_LIBRARIES := media_plugin_headers
LOCAL_CFLAGS += -DUSE_ANDROID
endif
endif

ifeq ($(EXYNOS_OMX_SUPPORT_EGL_IMAGE), true)
LOCAL_CFLAGS += -DEGL_IMAGE_SUPPORT
endif

ifdef BOARD_EXYNOS_S10B_FORMAT_ALIGN
LOCAL_CFLAGS += -DS10B_FORMAT_8B_ALIGNMENT=$(BOARD_EXYNOS_S10B_FORMAT_ALIGN)
endif

LOCAL_CFLAGS += -Wno-unused-variable -Wno-unused-label -Wno-unused-function

include $(BUILD_STATIC_LIBRARY)

include $(CLEAR_VARS)

LOCAL_MODULE_TAGS := optional

LOCAL_SRC_FILES := \
	Exynos_OMX_Resourcemanager.c

LOCAL_PRELINK_MODULE := false
LOCAL_MODULE := libExynosOMX_Resourcemanager
ifeq ($(BOARD_USES_VENDORIMAGE), true)
LOCAL_PROPRIETARY_MODULE := true
endif

LOCAL_CFLAGS :=

LOCAL_STATIC_LIBRARIES := libExynosOMX_OSAL
LOCAL_SHARED_LIBRARIES := libcutils libutils liblog

LOCAL_C_INCLUDES := \
	$(EXYNOS_OMX_INC)/exynos \
	$(EXYNOS_OMX_TOP)/osal

ifeq ($(BOARD_USE_KHRONOS_OMX_HEADER), true)
LOCAL_CFLAGS += -DUSE_KHRONOS_OMX_HEADER
LOCAL_C_INCLUDES += $(EXYNOS_OMX_INC)/khronos
else
ifeq ($(BOARD_USE_ANDROID), true)
LOCAL_HEADER_LIBRARIES := media_plugin_headers
LOCAL_CFLAGS += -DUSE_ANDROID
endif
endif

ifeq ($(EXYNOS_OMX_SUPPORT_TUNNELING), true)
LOCAL_CFLAGS += -DTUNNELING_SUPPORT
endif

ifneq ($(BOARD_NOT_SUPPORT_DCPP), true)
LOCAL_CFLAGS += -DUSE_SECURE_WITH_NONSECURE
endif

ifeq ($(BOARD_USE_SINGLE_DRM), true)
LOCAL_CFLAGS += -DUSE_SINGLE_DRM
endif

ifdef BOARD_EXYNOS_S10B_FORMAT_ALIGN
LOCAL_CFLAGS += -DS10B_FORMAT_8B_ALIGNMENT=$(BOARD_EXYNOS_S10B_FORMAT_ALIGN)
endif

ifdef BOARD_USE_MAX_COMPONENT_NUM
LOCAL_CFLAGS += -DMAX_COMPONENT_NUM=$(BOARD_USE_MAX_COMPONENT_NUM)
endif

LOCAL_CFLAGS += -Wno-unused-variable -Wno-unused-label -Wno-unused-function

include $(BUILD_SHARED_LIBRARY)
