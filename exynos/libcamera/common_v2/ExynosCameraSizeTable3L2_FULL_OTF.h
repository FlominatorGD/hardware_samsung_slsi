/*
**
** Copyright 2013, Samsung Electronics Co. LTD
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

#ifndef EXYNOS_CAMERA_LUT_3L2_H
#define EXYNOS_CAMERA_LUT_3L2_H

/* -------------------------
    SIZE_RATIO_16_9 = 0,
    SIZE_RATIO_4_3,
    SIZE_RATIO_1_1,
    SIZE_RATIO_3_2,
    SIZE_RATIO_5_4,
    SIZE_RATIO_5_3,
    SIZE_RATIO_11_9,
    SIZE_RATIO_END
----------------------------
    RATIO_ID,
    SENSOR_W   = 1,
    SENSOR_H,
    BNS_W,
    BNS_H,
    BCROP_W,
    BCROP_H,
    BDS_W,
    BDS_H,
    TARGET_W,
    TARGET_H,
-----------------------------
    Sensor Margin Width  = 16,
    Sensor Margin Height = 10
-----------------------------*/

static int PREVIEW_SIZE_LUT_3L2[][SIZE_OF_LUT] =
{
    /* Binning   = OFF
       BNS ratio = 1.0
       BDS       = 1080p */

    /* 16:9 (Single, Dual) */
    { SIZE_RATIO_16_9,
     (4128 + 16),(2322 + 10),   /* [sensor ] */
      4144      , 2332      ,   /* [bns    ] */
      4128      , 2322      ,   /* [bcrop  ] */
      4128      , 2322      ,   /* [bds    ] */
      1920      , 1080      ,   /* [target ] */
    },
    /*  4:3 (Single, Dual) */
    { SIZE_RATIO_4_3,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      4128      , 3096      ,   /* [bcrop  ] */
      4128      , 3096      ,   /* [bds  ] */
      1440      , 1080      ,   /* [target ] */
    },
    /* 1:1 (Single, Dual) */
    { SIZE_RATIO_1_1,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      3088      , 3088      ,   /* [bcrop  ] */
      3088      , 3088      ,   /* [bds  ] */
      1088      , 1088      ,   /* [target ] */
    },
    /* 3:2 (Single, Dual) */
    { SIZE_RATIO_3_2,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      4128      , 2752      ,   /* [bcrop  ] */
      4128      , 2752      ,   /* [bds    ] */
      1616      , 1080      ,   /* [target ] */
    },
    /* 5:4 (Single, Dual) */
    { SIZE_RATIO_5_4,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      3872      , 3096      ,   /* [bcrop  ] */
      3872      , 3096      ,   /* [bds    ] *//* w=3060, Reduced for 16 pixel align */
      1344      , 1080      ,   /* [target ] */
    },
    /* 5:3 (Single, Dual) */
    { SIZE_RATIO_5_3,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      4128      , 2476      ,   /* [bcrop  ] */
      4128      , 2476      ,   /* [bds    ] */
      1792      , 1080      ,   /* [target ] */
    },
    /* 11:9 (Single, Dual) */
    { SIZE_RATIO_11_9,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      3784      , 3096      ,   /* [bcrop  ] */
      3784      , 3096      ,   /* [bds    ] *//* w=1320, Reduced for 16 pixel align */
      1312      , 1080      ,   /* [target ] */
    }
};

static int PREVIEW_SIZE_LUT_3L2_BNS[][SIZE_OF_LUT] =
{
    /* Binning   = OFF
       BNS ratio = 2.0
       BDS       = OFF */

    /* 16:9 (Single, Dual) */
    { SIZE_RATIO_16_9,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      2072      , 1552      ,   /* [bns    ] */
      2048      , 1152      ,   /* [bcrop  ] */
      2048      , 1152      ,   /* [bds    ] */
      1920      , 1080      ,   /* [target ] */
    },
    /* 4:3 (Single, Dual) */
    { SIZE_RATIO_4_3,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      2072      , 1552      ,   /* [bns    ] */
      2056      , 1542      ,   /* [bcrop  ] */
      2056      , 1542      ,   /* [bds    ] */
      1440      , 1080      ,   /* [target ] */
    }
};

static int PICTURE_SIZE_LUT_3L2[][SIZE_OF_LUT] =
{
    /* Binning   = OFF
       BNS ratio = 1.0
       BDS       = OFF */

    /* 16:9 (Single, Dual) */
    { SIZE_RATIO_16_9,
     (4128 + 16),(2322 + 10),   /* [sensor ] */
      4144      , 2332      ,   /* [bns    ] */
      4128      , 2322      ,   /* [bcrop  ] */
      4128      , 2322      ,   /* [bds    ] */
      4128      , 2322      ,   /* [target ] */
    },
    /* 4:3 (Single, Dual) */
    { SIZE_RATIO_4_3,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      4128      , 3096      ,   /* [bcrop  ] */
      4128      , 3096      ,   /* [bds    ] */
      4128      , 3096      ,   /* [target ] */
      },
    /* 1:1 (Single, Dual) */
    { SIZE_RATIO_1_1,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      3088      , 3088      ,   /* [bcrop  ] */
      3088      , 3088      ,   /* [bds    ] */
      3088      , 3088      ,   /* [target ] */
    },
    /* 3:2 (Single, Dual) */
    { SIZE_RATIO_3_2,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      4128      , 2752      ,   /* [bcrop  ] */
      4128      , 2752      ,   /* [bds    ] */
      4128      , 2752      ,   /* [target ] */
    },
    /* 5:4 (Single, Dual) */
    { SIZE_RATIO_5_4,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      3872      , 3096      ,   /* [bcrop  ] */
      3872      , 3096      ,   /* [bds    ] *//* w=3060, Reduced for 16 pixel align */
      3872      , 3096      ,   /* [target ] */
    },
    /* 5:3 (Single, Dual) */
    { SIZE_RATIO_5_3,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      4128      , 2476      ,   /* [bcrop  ] */
      4128      , 2476      ,   /* [bds    ] */
      4128      , 2476      ,   /* [target ] */
    },
    /* 11:9 (Single, Dual) */
    { SIZE_RATIO_11_9,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      3784      , 3096      ,   /* [bcrop  ] */
      3784      , 3096      ,   /* [bds    ] *//* w=1320, Reduced for 16 pixel align */
      3776      , 3096      ,   /* [target ] */
    }
};

static int VIDEO_SIZE_LUT_3L2[][SIZE_OF_LUT] =
{
    /* Binning   = OFF
       BNS ratio = 1.0
       BDS       = 1080p */

    /* 16:9 (Single) */
    { SIZE_RATIO_16_9,
     (4128 + 16),(2322 + 10),   /* [sensor ] */
      4144      , 2332      ,   /* [bns    ] */
      4128      , 2322      ,   /* [bcrop  ] */
      4128      , 2322      ,   /* [bds    ] */
      1920      , 1080      ,   /* [target ] */
    },
    /* 4:3 (Single) */
    { SIZE_RATIO_4_3,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      4128      , 3096      ,   /* [bcrop  ] */
      4128      , 3096      ,   /* [bds    ] */
      1440      , 1080      ,   /* [target ] */
    },
    /* 1:1 (Single) */
    { SIZE_RATIO_1_1,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      3088      , 3088      ,   /* [bcrop  ] */
      3088      , 3088      ,   /* [bds    ] */
      1088      , 1088      ,   /* [target ] */
    },
    /* 3:2 (Single) */
    { SIZE_RATIO_3_2,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      4128      , 2752      ,   /* [bcrop  ] */
      4128      , 2752      ,   /* [bds    ] */
      1616      , 1080      ,   /* [target ] */
    },
    /* 5:4 (Single) */
    { SIZE_RATIO_5_4,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      3872      , 3096      ,   /* [bcrop  ] */
      3872      , 3096      ,   /* [bds    ] *//* w=3060, Reduced for 16 pixel align */
      1344      , 1080      ,   /* [target ] */
    },
    /* 5:3 (Single) */
    { SIZE_RATIO_5_3,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      4128      , 2476      ,   /* [bcrop  ] */
      4128      , 2476      ,   /* [bds    ] */
      1792      , 1080      ,   /* [target ] */
    },
    /* 11:9 (Single) */
    { SIZE_RATIO_11_9,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      3784      , 3096      ,   /* [bcrop  ] */
      3784      , 3096      ,   /* [bds    ] *//* w=1320, Reduced for 16 pixel align */
      1312      , 1080      ,   /* [target ] */
    }
};

static int VIDEO_SIZE_LUT_3L2_BNS[][SIZE_OF_LUT] =
{
    /* Binning   = OFF
       BNS ratio = 2.0
       BDS       = 1080p */

    /* 16:9 (Single) */
    { SIZE_RATIO_16_9,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      2072      , 1552      ,   /* [bns    ] */
      2048      , 1152      ,   /* [bcrop  ] */
      3840      , 2160      ,   /* [bds    ] */
      3840      , 2160      ,   /* [target ] */
    },
    /* 4:3 (Single) */
    { SIZE_RATIO_4_3,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      2072      , 1552      ,   /* [bns    ] */
      2056      , 1542      ,   /* [bcrop  ] */
      1440      , 1080      ,   /* [bds    ] */
      1440      , 1080      ,   /* [target ] */
    }
};

static int VIDEO_SIZE_LUT_60FPS_HIGH_SPEED_3L2[][SIZE_OF_LUT] =
{
    /* Binning   = ON
       BNS ratio = 1.0
       BDS       = OFF */

    /*  FHD_60  16:9 (Single) */
    { SIZE_RATIO_4_3,
     ( 992 + 16),( 744 + 10),   /* [sensor ] */
      1008      ,  754      ,   /* [bns    ] */
       992      ,  744      ,   /* [bcrop  ] */
       992      ,  744      ,   /* [bds    ] */
       992      ,  744      ,   /* [target ] */
    }
};

static int VIDEO_SIZE_LUT_120FPS_HIGH_SPEED_3L2[][SIZE_OF_LUT] =
{
    /* Binning   = ON
       BNS ratio = 1.0
       BDS       = OFF */

    /*   HD_120  16:9 (Single) */
    { SIZE_RATIO_16_9,
     ( 992 + 16),( 558 + 10),   /* [sensor ] */
      1008      ,  568      ,   /* [bns    ] */
       992      ,  558      ,   /* [bcrop  ] */
       992      ,  558      ,   /* [bds    ] */
       992      ,  558      ,   /* [target ] */
    }
};

static int VTCALL_SIZE_LUT_3L2[][SIZE_OF_LUT] =
{
    /* 16:9 (VT_Call) */
    { SIZE_RATIO_16_9,
     (2056 + 16),(1542 + 10),   /* [sensor ] */
      2072      , 1552      ,   /* [bns    ] */
      1280      ,  720      ,   /* [bcrop  ] */
      1280      ,  720      ,   /* [bds    ] */
      1280      ,  720      ,   /* [target ] */
    },
    /* 4:3 (VT_Call) */
    { SIZE_RATIO_4_3,
     (2056 + 16),(1542 + 10),   /* [sensor ] */
      2072      , 1552      ,   /* [bns    ] */
       960      ,  720      ,   /* [bcrop  ] */
       960      ,  720      ,   /* [bds    ] */
       960      ,  720      ,   /* [target ] */
    },
    /* 1:1 (VT_Call) */
    { SIZE_RATIO_1_1,
     (2056 + 16),(1542 + 10),   /* [sensor ] */
      2072      , 1552      ,   /* [bns    ] */
       720      ,  720      ,   /* [bcrop  ] */
       720      ,  720      ,   /* [bds  ] */
       720      ,  720      ,   /* [target ] */
    },
    /* 11:9 (VT_Call) */
    { SIZE_RATIO_11_9,
     (2056 + 16),(1542 + 10),   /* [sensor ] */
      2072      , 1552      ,   /* [bns    ] */
      1760      , 1440      ,   /* [bcrop  ] */
      1760      , 1440      ,   /* [bds  ] */
       352      ,  288      ,   /* [target ] */
    }
};

static int S5K3L2_PREVIEW_LIST[][SIZE_OF_RESOLUTION] =
{
#if defined(CAMERA_LCD_SIZE) && (CAMERA_LCD_SIZE >= LCD_SIZE_1920_1080)
    { 1920, 1080, SIZE_RATIO_16_9},
    { 1440, 1080, SIZE_RATIO_4_3},
    { 1072, 1072, SIZE_RATIO_1_1},
#else
    // for android 5.1 CTS
    // Aspect ratio of maximum preview size should be same with maximum picture size's AR
    // https://android.googlesource.com/platform/frameworks/base/+/a0496d3%5E!/
    { 1280,  960, SIZE_RATIO_4_3},
#endif
    { 1280,  720, SIZE_RATIO_16_9},
    { 1056,  704, SIZE_RATIO_3_2},
    {  960,  720, SIZE_RATIO_4_3},
    {  880,  720, SIZE_RATIO_11_9},
    {  720,  720, SIZE_RATIO_1_1},
    {  720,  480, SIZE_RATIO_3_2},
    {  640,  480, SIZE_RATIO_4_3},
    {  352,  288, SIZE_RATIO_11_9},
    {  320,  240, SIZE_RATIO_4_3},
};

static int S5K3L2_HIDDEN_PREVIEW_LIST[][SIZE_OF_RESOLUTION] =
{
#if defined(CAMERA_LCD_SIZE) && (CAMERA_LCD_SIZE >= LCD_SIZE_1920_1080)
    { 3840, 2160, SIZE_RATIO_16_9},
    { 1600, 1200, SIZE_RATIO_4_3},
    { 1280,  960, SIZE_RATIO_4_3},
#else
    { 1920, 1080, SIZE_RATIO_16_9}, // for USE_ADAPTIVE_CSC_RECORDING
#endif
    { 1056,  864, SIZE_RATIO_11_9},
    {  800,  480, SIZE_RATIO_5_3},
    {  672,  448, SIZE_RATIO_3_2},
    {  528,  432, SIZE_RATIO_11_9},
    {  480,  320, SIZE_RATIO_3_2},
    {  480,  270, SIZE_RATIO_16_9},
};

static int S5K3L2_PICTURE_LIST[][SIZE_OF_RESOLUTION] =
{
    { 4128, 3096, SIZE_RATIO_4_3},
    { 4128, 2322, SIZE_RATIO_16_9},
    { 3264, 2448, SIZE_RATIO_4_3},
    { 3264, 1836, SIZE_RATIO_16_9},
    { 3088, 3088, SIZE_RATIO_1_1},
    { 2048, 1536, SIZE_RATIO_4_3},
    { 2048, 1152, SIZE_RATIO_16_9},
    { 1920, 1080, SIZE_RATIO_16_9},
    { 1280,  720, SIZE_RATIO_16_9},
    {  960,  720, SIZE_RATIO_4_3},
    {  640,  480, SIZE_RATIO_4_3},
};

static int S5K3L2_HIDDEN_PICTURE_LIST[][SIZE_OF_RESOLUTION] =
{
    { 3200, 2400, SIZE_RATIO_4_3},
    { 3072, 1728, SIZE_RATIO_16_9},
    { 2988, 2988, SIZE_RATIO_1_1},
    { 2976, 2976, SIZE_RATIO_1_1},
    { 2592, 1944, SIZE_RATIO_4_3},
    { 2592, 1936, SIZE_RATIO_4_3},  /* not exactly matched ratio */
    { 2560, 1920, SIZE_RATIO_4_3},
    { 2448, 2448, SIZE_RATIO_1_1},
    { 2048, 1536, SIZE_RATIO_4_3},
};

static int S5K3L2_THUMBNAIL_LIST[][SIZE_OF_RESOLUTION] =
{
    {  512,  384, SIZE_RATIO_4_3},
    {  512,  288, SIZE_RATIO_16_9},
    {  384,  384, SIZE_RATIO_1_1},
    {  320,  240, SIZE_RATIO_4_3},
    {    0,    0, SIZE_RATIO_1_1}
};

static int S5K3L2_VIDEO_LIST[][SIZE_OF_RESOLUTION] =
{
    { 1920, 1080, SIZE_RATIO_16_9},
    { 1440, 1080, SIZE_RATIO_4_3},
    { 1280,  720, SIZE_RATIO_16_9},
    {  960,  720, SIZE_RATIO_4_3},
    {  800,  450, SIZE_RATIO_16_9},
    {  720,  480, SIZE_RATIO_3_2},
    {  640,  480, SIZE_RATIO_4_3},
    {  480,  320, SIZE_RATIO_3_2},
    {  352,  288, SIZE_RATIO_11_9},
    {  320,  240, SIZE_RATIO_4_3},
    {  176,  144, SIZE_RATIO_11_9}
};

static int S5K3L2_HIDDEN_VIDEO_LIST[][SIZE_OF_RESOLUTION] =
{
#ifdef USE_UHD_RECORDING
    { 3840, 2160, SIZE_RATIO_16_9}
#endif
};

static int S5K3L2_FPS_RANGE_LIST[][2] =
{
    {   5000,   5000},
    {   7000,   7000},
    {  15000,  15000},
    {  24000,  24000},
    {   4000,  30000},
    {  10000,  30000},
    {  15000,  30000},
    {  30000,  30000},
};

static int S5K3L2_HIDDEN_FPS_RANGE_LIST[][2] =
{
    {  30000,  60000},
    {  60000,  60000},
    {  60000, 120000},
    { 120000, 120000},
};
#endif
