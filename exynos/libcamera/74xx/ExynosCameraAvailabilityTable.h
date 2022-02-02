/*
** Copyright 2014, Samsung Electronics Co. LTD
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#ifndef EXYNOS_CAMERA_AVAILABILITY_TABLE_H
#define EXYNOS_CAMERA_AVAILABILITY_TABLE_H

#include <hardware/camera3.h>
#include <camera/CameraMetadata.h>

/* Android ColorCorrection Static Metadata */
static uint8_t AVAILABLE_COLOR_CORRECTION_ABERRATION_MODES[] =
{
    ANDROID_COLOR_CORRECTION_ABERRATION_MODE_OFF,
    //ANDROID_COLOR_CORRECTION_ABERRATION_MODE_FAST,
    //ANDROID_COLOR_CORRECTION_ABERRATION_MODE_HIGH_QUALITY,
};

/* Android Control Static Metadata */
static uint8_t AVAILABLE_ANTIBANDING_MODES[] =
{
    ANDROID_CONTROL_AE_ANTIBANDING_MODE_OFF,
    //ANDROID_CONTROL_AE_ANTIBANDING_MODE_50HZ,
    //ANDROID_CONTROL_AE_ANTIBANDING_MODE_60HZ,
    ANDROID_CONTROL_AE_ANTIBANDING_MODE_AUTO,
};

/* ANDROID_LENS_FACING_FRONT */
static uint8_t AVAILABLE_AE_MODES_FRONT[] =
{
    ANDROID_CONTROL_AE_MODE_OFF,
    ANDROID_CONTROL_AE_MODE_ON,
    //ANDROID_CONTROL_AE_MODE_ON_AUTO_FLASH,
    //ANDROID_CONTROL_AE_MODE_ON_ALWAYS_FLASH,
    //ANDROID_CONTROL_AE_MODE_ON_AUTO_FLASH_REDEYE,
};
/* ANDROID_LENS_FACING_BACK */
static uint8_t AVAILABLE_AE_MODES_BACK[] =
{
    ANDROID_CONTROL_AE_MODE_OFF,
    ANDROID_CONTROL_AE_MODE_ON,
    ANDROID_CONTROL_AE_MODE_ON_AUTO_FLASH,
    ANDROID_CONTROL_AE_MODE_ON_ALWAYS_FLASH,
    //ANDROID_CONTROL_AE_MODE_ON_AUTO_FLASH_REDEYE,
};

/* ANDROID_LENS_FACING_FRONT */
static uint8_t AVAILABLE_AF_MODES_FRONT[] =
{
    ANDROID_CONTROL_AF_MODE_OFF,
    //ANDROID_CONTROL_AF_MODE_AUTO,
    //ANDROID_CONTROL_AF_MODE_MACRO,
    //ANDROID_CONTROL_AF_MODE_CONTINUOUS_VIDEO,
    //ANDROID_CONTROL_AF_MODE_CONTINUOUS_PICTURE,
    //ANDROID_CONTROL_AF_MODE_EDOF,
};
/* ANDROID_LENS_FACING_BACK */
static uint8_t AVAILABLE_AF_MODES_BACK[] =
{
    ANDROID_CONTROL_AF_MODE_OFF,
    ANDROID_CONTROL_AF_MODE_AUTO,
    ANDROID_CONTROL_AF_MODE_MACRO,
    ANDROID_CONTROL_AF_MODE_CONTINUOUS_VIDEO,
    ANDROID_CONTROL_AF_MODE_CONTINUOUS_PICTURE,
    //ANDROID_CONTROL_AF_MODE_EDOF,
};

static uint8_t AVAILABLE_EFFECT_MODES[] =
{
    ANDROID_CONTROL_EFFECT_MODE_OFF,
    ANDROID_CONTROL_EFFECT_MODE_MONO,
    ANDROID_CONTROL_EFFECT_MODE_NEGATIVE,
    //ANDROID_CONTROL_EFFECT_MODE_SOLARIZE,
    ANDROID_CONTROL_EFFECT_MODE_SEPIA,
    ANDROID_CONTROL_EFFECT_MODE_POSTERIZE,
    //ANDROID_CONTROL_EFFECT_MODE_WHITEBOARD,
    //ANDROID_CONTROL_EFFECT_MODE_BLACKBOARD,
    ANDROID_CONTROL_EFFECT_MODE_AQUA,
};

static uint8_t AVAILABLE_SCENE_MODES[] =
{
    ANDROID_CONTROL_SCENE_MODE_DISABLED,
    ANDROID_CONTROL_SCENE_MODE_FACE_PRIORITY,
    //ANDROID_CONTROL_SCENE_MODE_ACTION,
    //ANDROID_CONTROL_SCENE_MODE_PORTRAIT,
    //ANDROID_CONTROL_SCENE_MODE_LANDSCAPE,
    //ANDROID_CONTROL_SCENE_MODE_NIGHT,
    //ANDROID_CONTROL_SCENE_MODE_NIGHT_PORTRAIT,
    //ANDROID_CONTROL_SCENE_MODE_THEATRE,
    //ANDROID_CONTROL_SCENE_MODE_BEACH,
    //ANDROID_CONTROL_SCENE_MODE_SNOW,
    //ANDROID_CONTROL_SCENE_MODE_SUNSET,
    //ANDROID_CONTROL_SCENE_MODE_STEADYPHOTO,
    //ANDROID_CONTROL_SCENE_MODE_FIREWORKS,
    //ANDROID_CONTROL_SCENE_MODE_SPORTS,
    //ANDROID_CONTROL_SCENE_MODE_PARTY,
    //ANDROID_CONTROL_SCENE_MODE_CANDLELIGHT,
    //ANDROID_CONTROL_SCENE_MODE_BARCODE,
    //ANDROID_CONTROL_SCENE_MODE_HIGH_SPEED_VIDEO,
    //ANDROID_CONTROL_SCENE_MODE_HDR,
};

static uint8_t AVAILABLE_VIDEO_STABILIZATION_MODES[] =
{
    ANDROID_CONTROL_VIDEO_STABILIZATION_MODE_OFF,
    //ANDROID_CONTROL_VIDEO_STABILIZATION_MODE_ON,
};

static uint8_t AVAILABLE_AWB_MODES[] =
{
    ANDROID_CONTROL_AWB_MODE_OFF,
    ANDROID_CONTROL_AWB_MODE_AUTO,
    ANDROID_CONTROL_AWB_MODE_INCANDESCENT,
    ANDROID_CONTROL_AWB_MODE_FLUORESCENT,
    //ANDROID_CONTROL_AWB_MODE_WARM_FLUORESCENT,
    ANDROID_CONTROL_AWB_MODE_DAYLIGHT,
    ANDROID_CONTROL_AWB_MODE_CLOUDY_DAYLIGHT,
    //ANDROID_CONTROL_AWB_MODE_TWILIGHT,
    //ANDROID_CONTROL_AWB_MODE_SHADE,
};

static uint8_t AVAILABLE_CONTROL_MODES[] =
{
    ANDROID_CONTROL_MODE_OFF,
    ANDROID_CONTROL_MODE_AUTO,
    ANDROID_CONTROL_MODE_USE_SCENE_MODE,
    //ANDROID_CONTROL_MODE_OFF_KEEP_STATE,
};

static uint8_t SCENE_MODE_OVERRIDES[] =
{
    /* ANDROID_CONTROL_SCENE_MODE_DISABLED */
    ANDROID_CONTROL_AE_MODE_ON,
    ANDROID_CONTROL_AWB_MODE_AUTO,
    ANDROID_CONTROL_AF_MODE_AUTO,
    /* ANDROID_CONTROL_SCENE_MODE_FACE_PRIORITY */
    ANDROID_CONTROL_AE_MODE_ON,
    ANDROID_CONTROL_AWB_MODE_AUTO,
    ANDROID_CONTROL_AF_MODE_AUTO,
    /* ANDROID_CONTROL_SCENE_MODE_ACTION */
    //ANDROID_CONTROL_AE_MODE_ON,
    //ANDROID_CONTROL_AWB_MODE_AUTO,
    //ANDROID_CONTROL_AF_MODE_OFF,
    /* ANDROID_CONTROL_SCENE_MODE_NIGHT */
    //ANDROID_CONTROL_AE_MODE_ON,
    //ANDROID_CONTROL_AWB_MODE_AUTO,
    //ANDROID_CONTROL_AF_MODE_OFF,
    /* ANDROID_CONTROL_SCENE_MODE_SUNSET */
    //ANDROID_CONTROL_AE_MODE_ON,
    //ANDROID_CONTROL_AWB_MODE_DAYLIGHT,
    //ANDROID_CONTROL_AF_MODE_OFF,
    /* ANDROID_CONTROL_SCENE_MODE_HIGH_SPEED_VIDEO */
    //ANDROID_CONTROL_AE_MODE_ON,
    //ANDROID_CONTROL_AWB_MODE_AUTO,
    //ANDROID_CONTROL_AF_MODE_AUTO,
    /* ANDROID_CONTROL_SCENE_MODE_HDR */
    //ANDROID_CONTROL_AE_MODE_ON,
    //ANDROID_CONTROL_AWB_MODE_AUTO,
    //ANDROID_CONTROL_AF_MODE_AUTO,
};

/* Android Edge Static Metadata */
static uint8_t AVAILABLE_EDGE_MODES[] =
{
    ANDROID_EDGE_MODE_OFF,
    ANDROID_EDGE_MODE_FAST,
    ANDROID_EDGE_MODE_HIGH_QUALITY, /* NOT supported */
};

/* Android Hot Pixel Static Metadata */
static uint8_t AVAILABLE_HOT_PIXEL_MODES[] =
{
    ANDROID_HOT_PIXEL_MODE_OFF,
    ANDROID_HOT_PIXEL_MODE_FAST,
    ANDROID_HOT_PIXEL_MODE_HIGH_QUALITY,
};

/* Android Lens Static Metadata */
static uint8_t AVAILABLE_OPTICAL_STABILIZATION[] =
{
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE_OFF,
    //ANDROID_LENS_OPTICAL_STABILIZATION_MODE_ON,
};

/* Android Lens Static Metadata */
static uint8_t AVAILABLE_OPTICAL_STABILIZATION_BACK[] =
{
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE_OFF,
//    ANDROID_LENS_OPTICAL_STABILIZATION_MODE_ON,
};

/* Android Noise Reduction Static Metadata */
static uint8_t AVAILABLE_NOISE_REDUCTION_MODES[] =
{
    ANDROID_NOISE_REDUCTION_MODE_OFF,
    ANDROID_NOISE_REDUCTION_MODE_FAST,
    ANDROID_NOISE_REDUCTION_MODE_HIGH_QUALITY, /* NOT supported */
};

/* Android Request Static Metadata */
/* ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL_LIMITED */
static uint8_t AVAILABLE_CAPABILITIES_LIMITED[] =
{
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_RAW,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_PRIVATE_REPROCESSING,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_READ_SENSOR_SETTINGS,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_BURST_CAPTURE,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_YUV_REPROCESSING,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_DEPTH_OUTPUT,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_CONSTRAINED_HIGH_SPEED_VIDEO,
};

static uint8_t AVAILABLE_CAPABILITIES_LIMITED_BURST[] =
{
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_RAW,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_PRIVATE_REPROCESSING,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_READ_SENSOR_SETTINGS,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_BURST_CAPTURE,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_YUV_REPROCESSING,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_DEPTH_OUTPUT,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_CONSTRAINED_HIGH_SPEED_VIDEO,
};

/* ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL_LIMITED add optional */
static uint8_t AVAILABLE_CAPABILITIES_LIMITED_OPTIONAL[] =
{
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_RAW,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_PRIVATE_REPROCESSING,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_READ_SENSOR_SETTINGS,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_BURST_CAPTURE,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_YUV_REPROCESSING,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_DEPTH_OUTPUT,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_CONSTRAINED_HIGH_SPEED_VIDEO,
};

/* ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL_FULL */
static uint8_t AVAILABLE_CAPABILITIES_FULL[] =
{
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_RAW,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_PRIVATE_REPROCESSING,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_READ_SENSOR_SETTINGS,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_BURST_CAPTURE,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_YUV_REPROCESSING,
    //ANDROID_REQUEST_AVAILABLE_CAPABILITIES_DEPTH_OUTPUT,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES_CONSTRAINED_HIGH_SPEED_VIDEO,
};

/* ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL_LEGACY */
static uint8_t AVAILABLE_CAPABILITIES_LEGACY[] =
{
};

/* ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL_LIMITED */
static int32_t AVAILABLE_REQUEST_KEYS_LIMITED[] =
{
    /* REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE */
    ANDROID_CONTROL_AE_ANTIBANDING_MODE,
    ANDROID_CONTROL_AE_EXPOSURE_COMPENSATION,
    ANDROID_CONTROL_AE_LOCK,
    ANDROID_CONTROL_AE_MODE,
    ANDROID_CONTROL_AE_TARGET_FPS_RANGE,
    ANDROID_CONTROL_AF_MODE,
    ANDROID_CONTROL_AF_TRIGGER,
    ANDROID_CONTROL_AWB_LOCK,
    ANDROID_CONTROL_AWB_MODE,
    ANDROID_CONTROL_CAPTURE_INTENT,
    ANDROID_CONTROL_EFFECT_MODE,
    ANDROID_CONTROL_MODE,
    ANDROID_CONTROL_SCENE_MODE,
    ANDROID_CONTROL_VIDEO_STABILIZATION_MODE,
    ANDROID_FLASH_MODE,
    ANDROID_JPEG_ORIENTATION,
    ANDROID_JPEG_QUALITY,
    ANDROID_JPEG_THUMBNAIL_QUALITY,
    ANDROID_JPEG_THUMBNAIL_SIZE,
    ANDROID_SCALER_CROP_REGION,
    ANDROID_STATISTICS_FACE_DETECT_MODE,
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE,
    ANDROID_NOISE_REDUCTION_MODE,
#if 0
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR */
    ANDROID_SENSOR_FRAME_DURATION,
    ANDROID_SENSOR_EXPOSURE_TIME,
    ANDROID_SENSOR_SENSITIVITY,
    ANDROID_LENS_APERTURE,
    ANDROID_LENS_FILTER_DENSITY,
    ANDROID_BLACK_LEVEL_LOCK,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING */
    ANDROID_TONEMAP_MODE,
    ANDROID_COLOR_CORRECTION_MODE,
    ANDROID_COLOR_CORRECTION_GAINS,
    ANDROID_COLOR_CORRECTION_TRANSFORM,
    ANDROID_SHADING_MODE,
    ANDROID_STATISTICS_LENS_SHADING_MAP_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING with FULL H/W level */
    ANDROID_COLOR_CORRECTION_ABERRATION_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_RAW */
    ANDROID_HOT_PIXEL_MODE,
    ANDROID_STATISTICS_HOT_PIXEL_MAP_MODE,
    /* ETC */
    ANDROID_EDGE_MODE,
    ANDROID_SENSOR_TEST_PATTERN_MODE,
#endif
    ANDROID_CONTROL_AE_REGIONS,
    ANDROID_CONTROL_AWB_REGIONS,
    ANDROID_CONTROL_AF_REGIONS,
};

static int32_t AVAILABLE_REQUEST_KEYS_LIMITED_OPTIONAL[] =
{
    /* REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE */
    ANDROID_CONTROL_AE_ANTIBANDING_MODE,
    ANDROID_CONTROL_AE_EXPOSURE_COMPENSATION,
    ANDROID_CONTROL_AE_LOCK,
    ANDROID_CONTROL_AE_MODE,
    ANDROID_CONTROL_AE_PRECAPTURE_TRIGGER,
    ANDROID_CONTROL_AE_TARGET_FPS_RANGE,
    ANDROID_CONTROL_AF_MODE,
    ANDROID_CONTROL_AF_TRIGGER,
    ANDROID_CONTROL_AWB_LOCK,
    ANDROID_CONTROL_AWB_MODE,
    ANDROID_CONTROL_CAPTURE_INTENT,
    ANDROID_CONTROL_EFFECT_MODE,
    ANDROID_CONTROL_MODE,
    ANDROID_CONTROL_SCENE_MODE,
    ANDROID_CONTROL_VIDEO_STABILIZATION_MODE,
    ANDROID_FLASH_MODE,
    ANDROID_JPEG_GPS_COORDINATES,
    ANDROID_JPEG_GPS_PROCESSING_METHOD,
    ANDROID_JPEG_GPS_TIMESTAMP,
    ANDROID_JPEG_ORIENTATION,
    ANDROID_JPEG_QUALITY,
    ANDROID_JPEG_THUMBNAIL_QUALITY,
    ANDROID_JPEG_THUMBNAIL_SIZE,
    ANDROID_SCALER_CROP_REGION,
    ANDROID_STATISTICS_FACE_DETECT_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR */
    ANDROID_SENSOR_FRAME_DURATION,
    ANDROID_SENSOR_EXPOSURE_TIME,
    ANDROID_SENSOR_SENSITIVITY,
    ANDROID_LENS_APERTURE,
    ANDROID_LENS_FILTER_DENSITY,
    ANDROID_LENS_FOCAL_LENGTH,
    ANDROID_LENS_FOCUS_DISTANCE,
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE,
    ANDROID_BLACK_LEVEL_LOCK,
    ANDROID_NOISE_REDUCTION_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING */
    //ANDROID_TONEMAP_CURVE_BLUE,
    //ANDROID_TONEMAP_CURVE_GREEN,
    //ANDROID_TONEMAP_CURVE_RED,
    ANDROID_TONEMAP_MODE,
#if 0
    ANDROID_COLOR_CORRECTION_MODE,
    ANDROID_COLOR_CORRECTION_GAINS,
    ANDROID_COLOR_CORRECTION_TRANSFORM,
    ANDROID_SHADING_MODE,
    ANDROID_STATISTICS_LENS_SHADING_MAP_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING with FULL H/W level */
    //ANDROID_COLOR_CORRECTION_ABERRATION_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_RAW */
    ANDROID_HOT_PIXEL_MODE,
    ANDROID_STATISTICS_HOT_PIXEL_MAP_MODE,
#endif
    /* ETC */
    //ANDROID_DEMOSAIC_MODE,  //future
    ANDROID_EDGE_MODE,
    //ANDROID_EDGE_STRENGTH,  //future
    //ANDROID_SENSOR_TEST_PATTERN_MODE,
    //ANDROID_STATISTICS_HISTOGRAM_MODE,      //future
    //ANDROID_STATISTICS_SHARPNESS_MAP_MODE,  //future
    ANDROID_REQUEST_ID,
    ANDROID_CONTROL_AE_REGIONS,
    ANDROID_CONTROL_AWB_REGIONS,
    ANDROID_CONTROL_AF_REGIONS,
};

static int32_t AVAILABLE_REQUEST_KEYS_LIMITED_FRONT[] =
{
    /* REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE */
    ANDROID_CONTROL_AE_ANTIBANDING_MODE,
    ANDROID_CONTROL_AE_EXPOSURE_COMPENSATION,
    ANDROID_CONTROL_AE_LOCK,
    ANDROID_CONTROL_AE_MODE,
    ANDROID_CONTROL_AE_TARGET_FPS_RANGE,
    ANDROID_CONTROL_AF_MODE,
    ANDROID_CONTROL_AF_TRIGGER,
    ANDROID_CONTROL_AWB_LOCK,
    ANDROID_CONTROL_AWB_MODE,
    ANDROID_CONTROL_CAPTURE_INTENT,
    ANDROID_CONTROL_EFFECT_MODE,
    ANDROID_CONTROL_MODE,
    ANDROID_CONTROL_SCENE_MODE,
    ANDROID_CONTROL_VIDEO_STABILIZATION_MODE,
    ANDROID_FLASH_MODE,
    ANDROID_JPEG_GPS_COORDINATES,
    ANDROID_JPEG_GPS_PROCESSING_METHOD,
    ANDROID_JPEG_GPS_TIMESTAMP,
    ANDROID_JPEG_ORIENTATION,
    ANDROID_JPEG_QUALITY,
    ANDROID_JPEG_THUMBNAIL_QUALITY,
    ANDROID_JPEG_THUMBNAIL_SIZE,
    ANDROID_SCALER_CROP_REGION,
    ANDROID_STATISTICS_FACE_DETECT_MODE,
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE,
    ANDROID_NOISE_REDUCTION_MODE,
#if 0
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR */
    ANDROID_SENSOR_FRAME_DURATION,
    ANDROID_SENSOR_EXPOSURE_TIME,
    ANDROID_SENSOR_SENSITIVITY,
    ANDROID_LENS_APERTURE,
    ANDROID_LENS_FILTER_DENSITY,
    ANDROID_LENS_FOCAL_LENGTH,
    ANDROID_LENS_FOCUS_DISTANCE,
    ANDROID_BLACK_LEVEL_LOCK,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING */
    ANDROID_TONEMAP_CURVE_BLUE,
    ANDROID_TONEMAP_CURVE_GREEN,
    ANDROID_TONEMAP_CURVE_RED,
    ANDROID_TONEMAP_MODE,
    ANDROID_COLOR_CORRECTION_MODE,
    ANDROID_COLOR_CORRECTION_GAINS,
    ANDROID_COLOR_CORRECTION_TRANSFORM,
    ANDROID_SHADING_MODE,
    ANDROID_STATISTICS_LENS_SHADING_MAP_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING with FULL H/W level */
    ANDROID_COLOR_CORRECTION_ABERRATION_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_RAW */
    ANDROID_HOT_PIXEL_MODE,
    ANDROID_STATISTICS_HOT_PIXEL_MAP_MODE,
    /* ETC */
    //ANDROID_DEMOSAIC_MODE,  //future
    ANDROID_EDGE_MODE,
    //ANDROID_EDGE_STRENGTH,  //future
    ANDROID_SENSOR_TEST_PATTERN_MODE,
    //ANDROID_STATISTICS_HISTOGRAM_MODE,      //future
    //ANDROID_STATISTICS_SHARPNESS_MAP_MODE,  //future
    ANDROID_CONTROL_AE_REGIONS,
    ANDROID_CONTROL_AWB_REGIONS,
    ANDROID_CONTROL_AF_REGIONS,
#endif
    ANDROID_REQUEST_ID,
};

/* ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL_FULL */
static int32_t AVAILABLE_REQUEST_KEYS_FULL[] =
{
    /* REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE */
    ANDROID_CONTROL_AE_ANTIBANDING_MODE,
    ANDROID_CONTROL_AE_EXPOSURE_COMPENSATION,
    ANDROID_CONTROL_AE_LOCK,
    ANDROID_CONTROL_AE_MODE,
    ANDROID_CONTROL_AE_PRECAPTURE_TRIGGER,
    ANDROID_CONTROL_AE_TARGET_FPS_RANGE,
    ANDROID_CONTROL_AF_MODE,
    ANDROID_CONTROL_AF_TRIGGER,
    ANDROID_CONTROL_AWB_LOCK,
    ANDROID_CONTROL_AWB_MODE,
    ANDROID_CONTROL_CAPTURE_INTENT,
    ANDROID_CONTROL_EFFECT_MODE,
    ANDROID_CONTROL_MODE,
    ANDROID_CONTROL_SCENE_MODE,
    ANDROID_CONTROL_VIDEO_STABILIZATION_MODE,
    ANDROID_FLASH_MODE,
    ANDROID_JPEG_GPS_COORDINATES,
    ANDROID_JPEG_GPS_PROCESSING_METHOD,
    ANDROID_JPEG_GPS_TIMESTAMP,
    ANDROID_JPEG_ORIENTATION,
    ANDROID_JPEG_QUALITY,
    ANDROID_JPEG_THUMBNAIL_QUALITY,
    ANDROID_JPEG_THUMBNAIL_SIZE,
    ANDROID_SCALER_CROP_REGION,
    ANDROID_STATISTICS_FACE_DETECT_MODE,
    ANDROID_CONTROL_AE_REGIONS,
    ANDROID_CONTROL_AWB_REGIONS,
    ANDROID_CONTROL_AF_REGIONS,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR */
    ANDROID_SENSOR_FRAME_DURATION,
    ANDROID_SENSOR_EXPOSURE_TIME,
    ANDROID_SENSOR_SENSITIVITY,
    ANDROID_LENS_APERTURE,
    ANDROID_LENS_FILTER_DENSITY,
    ANDROID_LENS_FOCAL_LENGTH,
    ANDROID_LENS_FOCUS_DISTANCE,
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE,
    ANDROID_BLACK_LEVEL_LOCK,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING */
    ANDROID_TONEMAP_CURVE_BLUE,
    ANDROID_TONEMAP_CURVE_GREEN,
    ANDROID_TONEMAP_CURVE_RED,
    ANDROID_TONEMAP_MODE,
    ANDROID_COLOR_CORRECTION_MODE,
    ANDROID_COLOR_CORRECTION_GAINS,
    ANDROID_COLOR_CORRECTION_TRANSFORM,
    ANDROID_SHADING_MODE,
    ANDROID_STATISTICS_LENS_SHADING_MAP_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING with FULL H/W level */
    ANDROID_COLOR_CORRECTION_ABERRATION_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_RAW */
    ANDROID_HOT_PIXEL_MODE,
    ANDROID_STATISTICS_HOT_PIXEL_MAP_MODE,
    /* ETC */
    //ANDROID_DEMOSAIC_MODE,  //future
    ANDROID_EDGE_MODE,
    //ANDROID_EDGE_STRENGTH,  //future
    ANDROID_NOISE_REDUCTION_MODE,
    ANDROID_SENSOR_TEST_PATTERN_MODE,
    //ANDROID_STATISTICS_HISTOGRAM_MODE,      //future
    //ANDROID_STATISTICS_SHARPNESS_MAP_MODE,  //future
    ANDROID_REQUEST_ID,
};

static int32_t AVAILABLE_REQUEST_KEYS_LEGACY[] =
{
};

/* ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL_LIMITED */
static int32_t AVAILABLE_RESULT_KEYS_LIMITED[] =
{
    /* REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE */
    ANDROID_CONTROL_AE_ANTIBANDING_MODE,
    ANDROID_CONTROL_AE_EXPOSURE_COMPENSATION,
    ANDROID_CONTROL_AE_LOCK,
    ANDROID_CONTROL_AE_MODE,
    ANDROID_CONTROL_AE_TARGET_FPS_RANGE,
    ANDROID_CONTROL_AF_MODE,
    ANDROID_CONTROL_AF_TRIGGER,
    ANDROID_CONTROL_AWB_LOCK,
    ANDROID_CONTROL_AWB_MODE,
    ANDROID_CONTROL_CAPTURE_INTENT,
    ANDROID_CONTROL_EFFECT_MODE,
    ANDROID_CONTROL_MODE,
    ANDROID_CONTROL_SCENE_MODE,
    ANDROID_CONTROL_VIDEO_STABILIZATION_MODE,
    ANDROID_FLASH_MODE,
    ANDROID_FLASH_STATE,
    ANDROID_JPEG_ORIENTATION,
    ANDROID_JPEG_QUALITY,
    ANDROID_JPEG_THUMBNAIL_QUALITY,
    ANDROID_JPEG_THUMBNAIL_SIZE,
    ANDROID_SCALER_CROP_REGION,
    ANDROID_STATISTICS_FACE_DETECT_MODE,
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE,
    ANDROID_NOISE_REDUCTION_MODE,
#if 0
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR */
    ANDROID_SENSOR_FRAME_DURATION,
    ANDROID_SENSOR_EXPOSURE_TIME,
    ANDROID_SENSOR_SENSITIVITY,
    ANDROID_LENS_APERTURE,
    ANDROID_LENS_FILTER_DENSITY,
    ANDROID_BLACK_LEVEL_LOCK,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING */
    ANDROID_TONEMAP_MODE,
    ANDROID_COLOR_CORRECTION_GAINS,
    ANDROID_COLOR_CORRECTION_TRANSFORM,
    ANDROID_SHADING_MODE,
    ANDROID_STATISTICS_LENS_SHADING_MAP_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING with FULL H/W level */
    ANDROID_COLOR_CORRECTION_ABERRATION_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_RAW */
    ANDROID_HOT_PIXEL_MODE,
    ANDROID_STATISTICS_HOT_PIXEL_MAP_MODE,
    ANDROID_SENSOR_NEUTRAL_COLOR_POINT,
    ANDROID_SENSOR_GREEN_SPLIT,
    ANDROID_SENSOR_NOISE_PROFILE,
    /* ETC */
    ANDROID_EDGE_MODE,
    ANDROID_STATISTICS_SCENE_FLICKER,
    ANDROID_SENSOR_TEST_PATTERN_MODE,
#endif
    ANDROID_CONTROL_AE_REGIONS,
    ANDROID_CONTROL_AWB_REGIONS,
    ANDROID_CONTROL_AF_REGIONS,
};

static int32_t AVAILABLE_RESULT_KEYS_LIMITED_OPTIONAL[] =
{
    /* REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE */
    ANDROID_CONTROL_AE_ANTIBANDING_MODE,
    ANDROID_CONTROL_AE_EXPOSURE_COMPENSATION,
    ANDROID_CONTROL_AE_LOCK,
    ANDROID_CONTROL_AE_MODE,
    ANDROID_CONTROL_AE_PRECAPTURE_TRIGGER,
    ANDROID_CONTROL_AE_TARGET_FPS_RANGE,
    ANDROID_CONTROL_AF_MODE,
    ANDROID_CONTROL_AF_TRIGGER,
    ANDROID_CONTROL_AWB_LOCK,
    ANDROID_CONTROL_AWB_MODE,
    ANDROID_CONTROL_CAPTURE_INTENT,
    ANDROID_CONTROL_EFFECT_MODE,
    ANDROID_CONTROL_MODE,
    ANDROID_CONTROL_SCENE_MODE,
    ANDROID_CONTROL_VIDEO_STABILIZATION_MODE,
    ANDROID_FLASH_MODE,
    ANDROID_FLASH_STATE,
    ANDROID_JPEG_GPS_COORDINATES,
    ANDROID_JPEG_GPS_PROCESSING_METHOD,
    ANDROID_JPEG_GPS_TIMESTAMP,
    ANDROID_JPEG_ORIENTATION,
    ANDROID_JPEG_QUALITY,
    ANDROID_JPEG_THUMBNAIL_QUALITY,
    ANDROID_JPEG_THUMBNAIL_SIZE,
    ANDROID_SCALER_CROP_REGION,
    ANDROID_STATISTICS_FACE_DETECT_MODE,
    ANDROID_STATISTICS_FACE_IDS,
    ANDROID_STATISTICS_FACE_RECTANGLES,
    ANDROID_STATISTICS_FACE_SCORES,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR */
    ANDROID_SENSOR_FRAME_DURATION,
    ANDROID_SENSOR_EXPOSURE_TIME,
    ANDROID_SENSOR_SENSITIVITY,
    ANDROID_LENS_APERTURE,
    ANDROID_LENS_FILTER_DENSITY,
    ANDROID_LENS_FOCAL_LENGTH,
    ANDROID_LENS_FOCUS_DISTANCE,
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE,
    ANDROID_LENS_STATE,
    ANDROID_BLACK_LEVEL_LOCK,
    ANDROID_NOISE_REDUCTION_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING */
    //ANDROID_TONEMAP_CURVE_BLUE,
    //ANDROID_TONEMAP_CURVE_GREEN,
    //ANDROID_TONEMAP_CURVE_RED,
    ANDROID_TONEMAP_MODE,
#if 0
    ANDROID_COLOR_CORRECTION_GAINS,
    ANDROID_COLOR_CORRECTION_TRANSFORM,
    ANDROID_SHADING_MODE,
    ANDROID_STATISTICS_LENS_SHADING_MAP_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING with FULL H/W level */
    //ANDROID_COLOR_CORRECTION_ABERRATION_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_RAW */
    ANDROID_HOT_PIXEL_MODE,
    ANDROID_STATISTICS_HOT_PIXEL_MAP_MODE,
    ANDROID_SENSOR_NEUTRAL_COLOR_POINT,
    ANDROID_SENSOR_GREEN_SPLIT,
    ANDROID_SENSOR_NOISE_PROFILE,
#endif
    /* ETC */
    ANDROID_EDGE_MODE,
    ANDROID_STATISTICS_SCENE_FLICKER,
    //ANDROID_SENSOR_TEST_PATTERN_MODE,
    ANDROID_CONTROL_AE_REGIONS,
    ANDROID_CONTROL_AWB_REGIONS,
    ANDROID_CONTROL_AF_REGIONS,
};

static int32_t AVAILABLE_RESULT_KEYS_LIMITED_FRONT[] =
{
    /* REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE */
    ANDROID_CONTROL_AE_ANTIBANDING_MODE,
    ANDROID_CONTROL_AE_EXPOSURE_COMPENSATION,
    ANDROID_CONTROL_AE_LOCK,
    ANDROID_CONTROL_AE_MODE,
    ANDROID_CONTROL_AE_TARGET_FPS_RANGE,
    ANDROID_CONTROL_AF_MODE,
    ANDROID_CONTROL_AF_TRIGGER,
    ANDROID_CONTROL_AWB_LOCK,
    ANDROID_CONTROL_AWB_MODE,
    ANDROID_CONTROL_CAPTURE_INTENT,
    ANDROID_CONTROL_EFFECT_MODE,
    ANDROID_CONTROL_MODE,
    ANDROID_CONTROL_SCENE_MODE,
    ANDROID_CONTROL_VIDEO_STABILIZATION_MODE,
    ANDROID_FLASH_MODE,
    ANDROID_FLASH_STATE,
    ANDROID_JPEG_GPS_COORDINATES,
    ANDROID_JPEG_GPS_PROCESSING_METHOD,
    ANDROID_JPEG_GPS_TIMESTAMP,
    ANDROID_JPEG_ORIENTATION,
    ANDROID_JPEG_QUALITY,
    ANDROID_JPEG_THUMBNAIL_QUALITY,
    ANDROID_JPEG_THUMBNAIL_SIZE,
    ANDROID_SCALER_CROP_REGION,
    ANDROID_STATISTICS_FACE_DETECT_MODE,
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE,
    ANDROID_NOISE_REDUCTION_MODE,
#if 0
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR */
    ANDROID_SENSOR_FRAME_DURATION,
    ANDROID_SENSOR_EXPOSURE_TIME,
    ANDROID_SENSOR_SENSITIVITY,
    ANDROID_LENS_APERTURE,
    ANDROID_LENS_FILTER_DENSITY,
    ANDROID_LENS_FOCAL_LENGTH,
    ANDROID_LENS_FOCUS_DISTANCE,
    ANDROID_LENS_STATE,
    ANDROID_BLACK_LEVEL_LOCK,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING */
    ANDROID_TONEMAP_CURVE_BLUE,
    ANDROID_TONEMAP_CURVE_GREEN,
    ANDROID_TONEMAP_CURVE_RED,
    ANDROID_TONEMAP_MODE,
    ANDROID_COLOR_CORRECTION_GAINS,
    ANDROID_COLOR_CORRECTION_TRANSFORM,
    ANDROID_SHADING_MODE,
    ANDROID_STATISTICS_LENS_SHADING_MAP_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING with FULL H/W level */
    ANDROID_COLOR_CORRECTION_ABERRATION_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_RAW */
    ANDROID_HOT_PIXEL_MODE,
    ANDROID_STATISTICS_HOT_PIXEL_MAP_MODE,
    ANDROID_SENSOR_NEUTRAL_COLOR_POINT,
    ANDROID_SENSOR_GREEN_SPLIT,
    ANDROID_SENSOR_NOISE_PROFILE,
    /* ETC */
    ANDROID_EDGE_MODE,
    ANDROID_STATISTICS_SCENE_FLICKER,
    ANDROID_SENSOR_TEST_PATTERN_MODE,
    ANDROID_CONTROL_AE_REGIONS,
    ANDROID_CONTROL_AWB_REGIONS,
    ANDROID_CONTROL_AF_REGIONS,
#endif
};

/* ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL_FULL */
static int32_t AVAILABLE_RESULT_KEYS_FULL[] =
{
    /* REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE */
    ANDROID_CONTROL_AE_ANTIBANDING_MODE,
    ANDROID_CONTROL_AE_EXPOSURE_COMPENSATION,
    ANDROID_CONTROL_AE_LOCK,
    ANDROID_CONTROL_AE_MODE,
    ANDROID_CONTROL_AE_PRECAPTURE_TRIGGER,
    ANDROID_CONTROL_AE_TARGET_FPS_RANGE,
    ANDROID_CONTROL_AF_MODE,
    ANDROID_CONTROL_AF_TRIGGER,
    ANDROID_CONTROL_AWB_LOCK,
    ANDROID_CONTROL_AWB_MODE,
    ANDROID_CONTROL_CAPTURE_INTENT,
    ANDROID_CONTROL_EFFECT_MODE,
    ANDROID_CONTROL_MODE,
    ANDROID_CONTROL_SCENE_MODE,
    ANDROID_CONTROL_VIDEO_STABILIZATION_MODE,
    ANDROID_FLASH_MODE,
    ANDROID_FLASH_STATE,
    ANDROID_JPEG_GPS_COORDINATES,
    ANDROID_JPEG_GPS_PROCESSING_METHOD,
    ANDROID_JPEG_GPS_TIMESTAMP,
    ANDROID_JPEG_ORIENTATION,
    ANDROID_JPEG_QUALITY,
    ANDROID_JPEG_THUMBNAIL_QUALITY,
    ANDROID_JPEG_THUMBNAIL_SIZE,
    ANDROID_SCALER_CROP_REGION,
    ANDROID_STATISTICS_FACE_DETECT_MODE,
    ANDROID_STATISTICS_FACE_IDS,
    ANDROID_STATISTICS_FACE_LANDMARKS,
    ANDROID_STATISTICS_FACE_RECTANGLES,
    ANDROID_STATISTICS_FACE_SCORES,
    ANDROID_CONTROL_AE_REGIONS,
    ANDROID_CONTROL_AWB_REGIONS,
    ANDROID_CONTROL_AF_REGIONS,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR */
    ANDROID_SENSOR_FRAME_DURATION,
    ANDROID_SENSOR_EXPOSURE_TIME,
    ANDROID_SENSOR_SENSITIVITY,
    ANDROID_LENS_APERTURE,
    ANDROID_LENS_FILTER_DENSITY,
    ANDROID_LENS_FOCAL_LENGTH,
    ANDROID_LENS_FOCUS_DISTANCE,
    ANDROID_LENS_OPTICAL_STABILIZATION_MODE,
    ANDROID_LENS_STATE,
    ANDROID_BLACK_LEVEL_LOCK,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING */
    ANDROID_TONEMAP_CURVE_BLUE,
    ANDROID_TONEMAP_CURVE_GREEN,
    ANDROID_TONEMAP_CURVE_RED,
    ANDROID_TONEMAP_MODE,
    ANDROID_COLOR_CORRECTION_GAINS,
    ANDROID_COLOR_CORRECTION_TRANSFORM,
    ANDROID_SHADING_MODE,
    ANDROID_STATISTICS_LENS_SHADING_MAP_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING with FULL H/W level */
    ANDROID_COLOR_CORRECTION_ABERRATION_MODE,
    /* REQUEST_AVAILABLE_CAPABILITIES_RAW */
    ANDROID_HOT_PIXEL_MODE,
    ANDROID_STATISTICS_HOT_PIXEL_MAP_MODE,
    ANDROID_SENSOR_NEUTRAL_COLOR_POINT,
    ANDROID_SENSOR_GREEN_SPLIT,
    ANDROID_SENSOR_NOISE_PROFILE,
    /* ETC */
    ANDROID_EDGE_MODE,
    ANDROID_NOISE_REDUCTION_MODE,
    ANDROID_STATISTICS_SCENE_FLICKER,
    ANDROID_SENSOR_TEST_PATTERN_MODE,
};

/* ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL_LEGACY */
static int32_t AVAILABLE_RESULT_KEYS_LEGACY[] =
{
};

/* ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL_LIMITED */
static int32_t AVAILABLE_CHARACTERISTICS_KEYS_LIMITED[] =
{
    ANDROID_COLOR_CORRECTION_AVAILABLE_ABERRATION_MODES,
    ANDROID_CONTROL_AE_AVAILABLE_ANTIBANDING_MODES,
    ANDROID_CONTROL_AE_AVAILABLE_MODES,
    ANDROID_CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES,
    ANDROID_CONTROL_AE_COMPENSATION_RANGE,
    ANDROID_CONTROL_AE_COMPENSATION_STEP,
    ANDROID_CONTROL_AF_AVAILABLE_MODES,
    ANDROID_CONTROL_AVAILABLE_EFFECTS,
    ANDROID_CONTROL_AVAILABLE_SCENE_MODES,
    ANDROID_CONTROL_AVAILABLE_VIDEO_STABILIZATION_MODES,
    ANDROID_CONTROL_AWB_AVAILABLE_MODES,
    ANDROID_CONTROL_MAX_REGIONS,
    ANDROID_CONTROL_AE_LOCK_AVAILABLE,
    ANDROID_CONTROL_AWB_LOCK_AVAILABLE,
    ANDROID_CONTROL_AVAILABLE_MODES,
    ANDROID_FLASH_INFO_AVAILABLE,
    ANDROID_HOT_PIXEL_AVAILABLE_HOT_PIXEL_MODES,
    ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL,
    ANDROID_JPEG_AVAILABLE_THUMBNAIL_SIZES,
    ANDROID_LENS_FACING,
    ANDROID_LENS_INFO_AVAILABLE_FOCAL_LENGTHS,
    ANDROID_LENS_INFO_AVAILABLE_OPTICAL_STABILIZATION,
    ANDROID_LENS_INFO_FOCUS_DISTANCE_CALIBRATION,
    ANDROID_LENS_INFO_HYPERFOCAL_DISTANCE,
    ANDROID_LENS_INFO_MINIMUM_FOCUS_DISTANCE,
    ANDROID_NOISE_REDUCTION_AVAILABLE_NOISE_REDUCTION_MODES,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES,
    ANDROID_REQUEST_MAX_NUM_OUTPUT_STREAMS,
    ANDROID_REQUEST_PARTIAL_RESULT_COUNT,
    ANDROID_REQUEST_PIPELINE_MAX_DEPTH,
    ANDROID_SCALER_AVAILABLE_MAX_DIGITAL_ZOOM,
    ANDROID_SCALER_AVAILABLE_STREAM_CONFIGURATIONS,
    ANDROID_SCALER_CROPPING_TYPE,
    ANDROID_SENSOR_AVAILABLE_TEST_PATTERN_MODES,
    ANDROID_SENSOR_BLACK_LEVEL_PATTERN,
    ANDROID_SENSOR_CALIBRATION_TRANSFORM1,
    ANDROID_SENSOR_CALIBRATION_TRANSFORM2,
    ANDROID_SENSOR_COLOR_TRANSFORM1,
    ANDROID_SENSOR_COLOR_TRANSFORM2,
    ANDROID_SENSOR_FORWARD_MATRIX1,
    ANDROID_SENSOR_FORWARD_MATRIX2,
    ANDROID_SENSOR_INFO_ACTIVE_ARRAY_SIZE,
    ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT,
    ANDROID_SENSOR_INFO_EXPOSURE_TIME_RANGE,
    ANDROID_SENSOR_INFO_MAX_FRAME_DURATION,
    ANDROID_SENSOR_INFO_PHYSICAL_SIZE,
    ANDROID_SENSOR_INFO_PIXEL_ARRAY_SIZE,
    ANDROID_SENSOR_INFO_SENSITIVITY_RANGE,
    ANDROID_SENSOR_INFO_WHITE_LEVEL,
    ANDROID_SENSOR_INFO_TIMESTAMP_SOURCE,
    ANDROID_SENSOR_MAX_ANALOG_SENSITIVITY,
    ANDROID_SENSOR_ORIENTATION,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT2,
    ANDROID_SHADING_AVAILABLE_MODES,
    ANDROID_STATISTICS_INFO_AVAILABLE_FACE_DETECT_MODES,
    ANDROID_STATISTICS_INFO_AVAILABLE_HOT_PIXEL_MAP_MODES,
    ANDROID_STATISTICS_INFO_AVAILABLE_LENS_SHADING_MAP_MODES,
    ANDROID_STATISTICS_INFO_MAX_FACE_COUNT,
    ANDROID_SYNC_MAX_LATENCY,
    ANDROID_TONEMAP_MAX_CURVE_POINTS,
#if 0
    ANDROID_EDGE_AVAILABLE_EDGE_MODES,
    ANDROID_LENS_INFO_AVAILABLE_APERTURES,
    ANDROID_LENS_INFO_AVAILABLE_FILTER_DENSITIES,
    ANDROID_TONEMAP_AVAILABLE_TONE_MAP_MODES,
#endif
};

static int32_t AVAILABLE_CHARACTERISTICS_KEYS_LIMITED_OPTIONAL[] =
{
    ANDROID_COLOR_CORRECTION_AVAILABLE_ABERRATION_MODES,
    ANDROID_CONTROL_AE_AVAILABLE_ANTIBANDING_MODES,
    ANDROID_CONTROL_AE_AVAILABLE_MODES,
    ANDROID_CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES,
    ANDROID_CONTROL_AE_COMPENSATION_RANGE,
    ANDROID_CONTROL_AE_COMPENSATION_STEP,
    ANDROID_CONTROL_AF_AVAILABLE_MODES,
    ANDROID_CONTROL_AVAILABLE_EFFECTS,
    ANDROID_CONTROL_AVAILABLE_SCENE_MODES,
    ANDROID_CONTROL_AVAILABLE_VIDEO_STABILIZATION_MODES,
    ANDROID_CONTROL_AWB_AVAILABLE_MODES,
    ANDROID_CONTROL_MAX_REGIONS,
    ANDROID_CONTROL_AE_LOCK_AVAILABLE,
    ANDROID_CONTROL_AWB_LOCK_AVAILABLE,
    ANDROID_CONTROL_AVAILABLE_MODES,
    ANDROID_FLASH_INFO_AVAILABLE,
    ANDROID_HOT_PIXEL_AVAILABLE_HOT_PIXEL_MODES,
    ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL,
    ANDROID_JPEG_AVAILABLE_THUMBNAIL_SIZES,
    ANDROID_LENS_FACING,
    ANDROID_LENS_INFO_AVAILABLE_FOCAL_LENGTHS,
    ANDROID_LENS_INFO_AVAILABLE_OPTICAL_STABILIZATION,
    ANDROID_LENS_INFO_FOCUS_DISTANCE_CALIBRATION,
    ANDROID_LENS_INFO_HYPERFOCAL_DISTANCE,
    ANDROID_LENS_INFO_MINIMUM_FOCUS_DISTANCE,
    ANDROID_NOISE_REDUCTION_AVAILABLE_NOISE_REDUCTION_MODES,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES,
    ANDROID_REQUEST_MAX_NUM_OUTPUT_STREAMS,
    ANDROID_REQUEST_PARTIAL_RESULT_COUNT,
    ANDROID_REQUEST_PIPELINE_MAX_DEPTH,
    ANDROID_SCALER_AVAILABLE_MAX_DIGITAL_ZOOM,
    ANDROID_SCALER_AVAILABLE_STREAM_CONFIGURATIONS,
    ANDROID_SCALER_CROPPING_TYPE,
    ANDROID_SENSOR_AVAILABLE_TEST_PATTERN_MODES,
    ANDROID_SENSOR_BLACK_LEVEL_PATTERN,
    ANDROID_SENSOR_CALIBRATION_TRANSFORM1,
    ANDROID_SENSOR_CALIBRATION_TRANSFORM2,
    ANDROID_SENSOR_COLOR_TRANSFORM1,
    ANDROID_SENSOR_COLOR_TRANSFORM2,
    ANDROID_SENSOR_FORWARD_MATRIX1,
    ANDROID_SENSOR_FORWARD_MATRIX2,
    ANDROID_SENSOR_INFO_ACTIVE_ARRAY_SIZE,
    ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT,
    ANDROID_SENSOR_INFO_EXPOSURE_TIME_RANGE,
    ANDROID_SENSOR_INFO_MAX_FRAME_DURATION,
    ANDROID_SENSOR_INFO_PHYSICAL_SIZE,
    ANDROID_SENSOR_INFO_PIXEL_ARRAY_SIZE,
    ANDROID_SENSOR_INFO_SENSITIVITY_RANGE,
    ANDROID_SENSOR_INFO_WHITE_LEVEL,
    ANDROID_SENSOR_INFO_TIMESTAMP_SOURCE,
    ANDROID_SENSOR_MAX_ANALOG_SENSITIVITY,
    ANDROID_SENSOR_ORIENTATION,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT2,
    ANDROID_SHADING_AVAILABLE_MODES,
    ANDROID_STATISTICS_INFO_AVAILABLE_FACE_DETECT_MODES,
    ANDROID_STATISTICS_INFO_AVAILABLE_HOT_PIXEL_MAP_MODES,
    ANDROID_STATISTICS_INFO_AVAILABLE_LENS_SHADING_MAP_MODES,
    ANDROID_STATISTICS_INFO_MAX_FACE_COUNT,
    ANDROID_SYNC_MAX_LATENCY,
    ANDROID_TONEMAP_MAX_CURVE_POINTS,
    ANDROID_EDGE_AVAILABLE_EDGE_MODES,
    ANDROID_LENS_INFO_AVAILABLE_APERTURES,
    ANDROID_LENS_INFO_AVAILABLE_FILTER_DENSITIES,
    ANDROID_TONEMAP_AVAILABLE_TONE_MAP_MODES,
};

/* ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL_FULL */
static int32_t AVAILABLE_CHARACTERISTICS_KEYS_FULL[] =
{
    ANDROID_COLOR_CORRECTION_AVAILABLE_ABERRATION_MODES,
    ANDROID_CONTROL_AE_AVAILABLE_ANTIBANDING_MODES,
    ANDROID_CONTROL_AE_AVAILABLE_MODES,
    ANDROID_CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES,
    ANDROID_CONTROL_AE_COMPENSATION_RANGE,
    ANDROID_CONTROL_AE_COMPENSATION_STEP,
    ANDROID_CONTROL_AF_AVAILABLE_MODES,
    ANDROID_CONTROL_AVAILABLE_EFFECTS,
    ANDROID_CONTROL_AVAILABLE_SCENE_MODES,
    ANDROID_CONTROL_AVAILABLE_VIDEO_STABILIZATION_MODES,
    ANDROID_CONTROL_AWB_AVAILABLE_MODES,
    ANDROID_CONTROL_MAX_REGIONS,
    ANDROID_CONTROL_AE_LOCK_AVAILABLE,
    ANDROID_CONTROL_AWB_LOCK_AVAILABLE,
    ANDROID_CONTROL_AVAILABLE_MODES,
    ANDROID_EDGE_AVAILABLE_EDGE_MODES,
    ANDROID_FLASH_INFO_AVAILABLE,
    ANDROID_HOT_PIXEL_AVAILABLE_HOT_PIXEL_MODES,
    ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL,
    ANDROID_JPEG_AVAILABLE_THUMBNAIL_SIZES,
    ANDROID_LENS_FACING,
    ANDROID_LENS_INFO_AVAILABLE_APERTURES,
    ANDROID_LENS_INFO_AVAILABLE_FILTER_DENSITIES,
    ANDROID_LENS_INFO_AVAILABLE_FOCAL_LENGTHS,
    ANDROID_LENS_INFO_AVAILABLE_OPTICAL_STABILIZATION,
    ANDROID_LENS_INFO_FOCUS_DISTANCE_CALIBRATION,
    ANDROID_LENS_INFO_HYPERFOCAL_DISTANCE,
    ANDROID_LENS_INFO_MINIMUM_FOCUS_DISTANCE,
    ANDROID_NOISE_REDUCTION_AVAILABLE_NOISE_REDUCTION_MODES,
    ANDROID_REQUEST_AVAILABLE_CAPABILITIES,
    ANDROID_REQUEST_MAX_NUM_OUTPUT_STREAMS,
    ANDROID_REQUEST_PARTIAL_RESULT_COUNT,
    ANDROID_REQUEST_PIPELINE_MAX_DEPTH,
    ANDROID_SCALER_AVAILABLE_MAX_DIGITAL_ZOOM,
    ANDROID_SCALER_AVAILABLE_STREAM_CONFIGURATIONS,
    ANDROID_SCALER_CROPPING_TYPE,
    ANDROID_SENSOR_AVAILABLE_TEST_PATTERN_MODES,
    ANDROID_SENSOR_BLACK_LEVEL_PATTERN,
    ANDROID_SENSOR_CALIBRATION_TRANSFORM1,
    ANDROID_SENSOR_CALIBRATION_TRANSFORM2,
    ANDROID_SENSOR_COLOR_TRANSFORM1,
    ANDROID_SENSOR_COLOR_TRANSFORM2,
    ANDROID_SENSOR_FORWARD_MATRIX1,
    ANDROID_SENSOR_FORWARD_MATRIX2,
    ANDROID_SENSOR_INFO_ACTIVE_ARRAY_SIZE,
    ANDROID_SENSOR_INFO_COLOR_FILTER_ARRANGEMENT,
    ANDROID_SENSOR_INFO_EXPOSURE_TIME_RANGE,
    ANDROID_SENSOR_INFO_MAX_FRAME_DURATION,
    ANDROID_SENSOR_INFO_PHYSICAL_SIZE,
    ANDROID_SENSOR_INFO_PIXEL_ARRAY_SIZE,
    ANDROID_SENSOR_INFO_SENSITIVITY_RANGE,
    ANDROID_SENSOR_INFO_WHITE_LEVEL,
    ANDROID_SENSOR_INFO_TIMESTAMP_SOURCE,
    ANDROID_SENSOR_MAX_ANALOG_SENSITIVITY,
    ANDROID_SENSOR_ORIENTATION,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT1,
    ANDROID_SENSOR_REFERENCE_ILLUMINANT2,
    ANDROID_SHADING_AVAILABLE_MODES,
    ANDROID_STATISTICS_INFO_AVAILABLE_FACE_DETECT_MODES,
    ANDROID_STATISTICS_INFO_AVAILABLE_HOT_PIXEL_MAP_MODES,
    ANDROID_STATISTICS_INFO_AVAILABLE_LENS_SHADING_MAP_MODES,
    ANDROID_STATISTICS_INFO_MAX_FACE_COUNT,
    ANDROID_SYNC_MAX_LATENCY,
    ANDROID_TONEMAP_AVAILABLE_TONE_MAP_MODES,
    ANDROID_TONEMAP_MAX_CURVE_POINTS,
};

/* ANDROID_INFO_SUPPORTED_HARDWARE_LEVEL_LEGACY */
static int32_t AVAILABLE_CHARACTERISTICS_KEYS_LEGACY[] =
{
};

/* Android Scaler Static Metadata */
static int64_t AVAILABLE_STALL_DURATIONS[] =
{
};

static int32_t YUV_FORMATS[] =
{
    HAL_PIXEL_FORMAT_RGBA_8888,
    HAL_PIXEL_FORMAT_YCbCr_420_888,
};

static int32_t STALL_FORMATS[] =
{
    HAL_PIXEL_FORMAT_BLOB,
};

static int32_t RAW_FORMATS[] =
{
    HAL_PIXEL_FORMAT_RAW16,
};

/* Android Sensor Static Metadata */
static int32_t AVAILABLE_TEST_PATTERN_MODES[] =
{
    ANDROID_SENSOR_TEST_PATTERN_MODE_OFF,
    //ANDROID_SENSOR_TEST_PATTERN_MODE_SOLID_COLOR,
    //ANDROID_SENSOR_TEST_PATTERN_MODE_COLOR_BARS,
    //ANDROID_SENSOR_TEST_PATTERN_MODE_COLOR_BARS_FADE_TO_GRAY,
    //ANDROID_SENSOR_TEST_PATTERN_MODE_PN9,
    //ANDROID_SENSOR_TEST_PATTERN_MODE_CUSTOM1,
};

/* Android Statistics Static Metadata */
static uint8_t AVAILABLE_FACE_DETECT_MODES[] =
{
    ANDROID_STATISTICS_FACE_DETECT_MODE_OFF,
    ANDROID_STATISTICS_FACE_DETECT_MODE_SIMPLE,
    //ANDROID_STATISTICS_FACE_DETECT_MODE_FULL,
};

static uint8_t AVAILABLE_HOT_PIXEL_MAP_MODES[] =
{
    ANDROID_STATISTICS_HOT_PIXEL_MAP_MODE_OFF,
    //ANDROID_STATISTICS_HOT_PIXEL_MAP_MODE_ON,
};

static uint8_t SHADING_AVAILABLE_MODES[] =
{
    ANDROID_SHADING_MODE_OFF,
    ANDROID_SHADING_MODE_FAST,
    //ANDROID_SHADING_MODE_HIGH_QUALITY,
};

static uint8_t AVAILABLE_LENS_SHADING_MAP_MODES[] =
{
    ANDROID_STATISTICS_LENS_SHADING_MAP_MODE_OFF,
    ANDROID_STATISTICS_LENS_SHADING_MAP_MODE_ON,
};

/* Android Tone Map Static Metadata */
static uint8_t AVAILABLE_TONE_MAP_MODES[] =
{
    //ANDROID_TONEMAP_MODE_CONTRAST_CURVE,
    ANDROID_TONEMAP_MODE_FAST,
    ANDROID_TONEMAP_MODE_HIGH_QUALITY,
    ANDROID_TONEMAP_MODE_GAMMA_VALUE,
    ANDROID_TONEMAP_MODE_PRESET_CURVE,
};

/* Android LED Static Metadata */
static uint8_t AVAILABLE_LEDS[] =
{
};

#endif
