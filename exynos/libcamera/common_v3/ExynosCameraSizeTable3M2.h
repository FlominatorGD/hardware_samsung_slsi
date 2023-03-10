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

#ifndef EXYNOS_CAMERA_LUT_3M2_H
#define EXYNOS_CAMERA_LUT_3M2_H

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

static int PREVIEW_SIZE_LUT_3M2[][SIZE_OF_LUT] =
{
    /* Binning   = OFF
       BNS ratio = 1.0
       BDS       = 1080p */
    /* 16:9 (Single, Dual) */
    { SIZE_RATIO_16_9,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
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
    /*  1:1 (Single, Dual) */
    { SIZE_RATIO_1_1,
     (3096 + 16),(3096 + 10),   /* [sensor ] */
      3112      , 3106      ,   /* [bns    ] */
      3088      , 3088      ,   /* [bcrop  ] */
      3088      , 3088      ,   /* [bds  ] */
      1088      , 1088      ,   /* [target ] */
    },
    /* 3:2 (Single, Dual) */
    { SIZE_RATIO_3_2,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      3488      , 2322      ,   /* [bcrop  ] */
      3488      , 2322      ,   /* [bds    ] */
      1616      , 1080      ,   /* [target ] */
    },
    /* 5:4 (Single, Dual) */
    { SIZE_RATIO_5_4,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      3736      , 2322      ,   /* [bcrop  ] */
      3736      , 2322      ,   /* [bds    ] */
      1344      , 1080      ,   /* [target ] */
    },
    /* 5:3 (Single, Dual) */
    { SIZE_RATIO_5_3,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      3870      , 2322      ,   /* [bcrop  ] */
      3870      , 2322      ,   /* [bds    ] */
      1792      , 1080      ,   /* [target ] */
    },
    /* 11:9 (Single, Dual) */
    { SIZE_RATIO_11_9,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      2848      , 2322      ,   /* [bcrop  ] */
      2848      , 2322      ,   /* [bds    ] */
      1312      , 1080      ,   /* [target ] */
    }
};

static int PREVIEW_SIZE_LUT_3M2_BNS[][SIZE_OF_LUT] =
{
    /* Binning   = OFF
       BNS ratio = 2.0
       BDS       = 1080p */

    /* 16:9 (Single, Dual) */
    { SIZE_RATIO_16_9,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      2072      , 1552      ,   /* [bns    ] */
      2064      , 1160      ,   /* [bcrop  ] */
      1920      , 1080      ,   /* [bds    ] */
      1920      , 1080      ,   /* [target ] */
    },
    /*  4:3 (Single, Dual) */
    { SIZE_RATIO_4_3,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      2072      , 1552      ,   /* [bns    ] */
      2064      , 1548      ,   /* [bcrop  ] */
      1440      , 1080      ,   /* [bds    ] */
      1440      , 1080      ,   /* [target ] */
    }
};

static int PICTURE_SIZE_LUT_3M2[][SIZE_OF_LUT] =
{
    /* Binning   = OFF
       BNS ratio = 1.0
       BDS       = OFF */

    /* 16:9 (Single, Dual) */
    { SIZE_RATIO_16_9,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      4128      , 2322      ,   /* [bcrop  ] */
      4128      , 2322      ,   /* [bds    ] */
      4128      , 2322      ,   /* [target ] */
    },
    /*  4:3 (Single, Dual) */
    { SIZE_RATIO_4_3,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      4128      , 3096      ,   /* [bcrop  ] */
      4128      , 3096      ,   /* [bds    ] */
      4128      , 3096      ,   /* [target ] */
    },
     /*  1:1 (Single, Dual) */
    { SIZE_RATIO_1_1,
     (3096 + 16),(3096 + 10),   /* [sensor ] */
      3112      , 3106      ,   /* [bns    ] */
      3088      , 3088      ,   /* [bcrop  ] */
      3088      , 3088      ,   /* [bds  ] */
      3088      , 3088      ,   /* [target ] */
    }
};

static int VIDEO_SIZE_LUT_3M2[][SIZE_OF_LUT] =
{
    /* Binning   = OFF
       BNS ratio = 1.0
       BDS       = 1080p */

    /*  16:9 (Single) */
    { SIZE_RATIO_16_9,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      4128      , 2322      ,   /* [bcrop  ] */
      4128      , 2322      ,   /* [bds    ] */
      1920      , 1080      ,   /* [target ] */
    },
    /*  4:3 (Single) */
    { SIZE_RATIO_4_3,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      4128      , 3096      ,   /* [bcrop  ] */
      4128      , 3096      ,   /* [bds    ] */
      1440      , 1080      ,   /* [target ] */
    },
    /*  1:1 (Single, Dual) */
    { SIZE_RATIO_1_1,
     (3096 + 16),(3096 + 10),   /* [sensor ] */
      3112      , 3106      ,   /* [bns    ] */
      3088      , 3088      ,   /* [bcrop  ] */
      3088      , 3088      ,   /* [bds  ] */
      1088      , 1088      ,   /* [target ] */
    },
    /* 3:2 (Single, Dual) */
    { SIZE_RATIO_3_2,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      3488      , 2322      ,   /* [bcrop  ] */
      3488      , 2322      ,   /* [bds    ] */
      1616      , 1080      ,   /* [target ] */
    },
    /* 5:4 (Single, Dual) */
    { SIZE_RATIO_5_4,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      3736      , 2322      ,   /* [bcrop  ] */
      3736      , 2322      ,   /* [bds    ] */
      1344      , 1080      ,   /* [target ] */
    },
    /* 5:3 (Single, Dual) */
    { SIZE_RATIO_5_3,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      3870      , 2322      ,   /* [bcrop  ] */
      3870      , 2322      ,   /* [bds    ] */
      1792      , 1080      ,   /* [target ] */
    },
    /* 11:9 (Single, Dual) */
    { SIZE_RATIO_11_9,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      4144      , 3106      ,   /* [bns    ] */
      2848      , 2322      ,   /* [bcrop  ] */
      2848      , 2322      ,   /* [bds    ] */
      1312      , 1080      ,   /* [target ] */
    }
};

static int VIDEO_SIZE_LUT_3M2_BNS[][SIZE_OF_LUT] =
{
    /* Binning   = OFF
       BNS ratio = 2.0
       BDS       = 1080p */

    /*  16:9 (Single) */
    { SIZE_RATIO_16_9,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      2072      , 1552      ,   /* [bns    ] */
      2064      , 1160      ,   /* [bcrop  ] */
      1920      , 1080      ,   /* [bds    ] */
      1920      , 1080      ,   /* [target ] */
    },
    /*  4:3 (Single) */
    { SIZE_RATIO_4_3,
     (4128 + 16),(3096 + 10),   /* [sensor ] */
      2072      , 1552      ,   /* [bns    ] */
      2064      , 1548      ,   /* [bcrop  ] */
      1440      , 1080      ,   /* [bds    ] */
      1440      , 1080      ,   /* [target ] */
    }
};

static int VIDEO_SIZE_LUT_3M2_2MP_SENSOR_BINNING[][SIZE_OF_LUT] =
{
    /* Binning   = OFF
       BNS ratio = 1.0
       BDS       = 1080p */

    /*  16:9 (Single) */
    { SIZE_RATIO_16_9,
     (2056 + 16),(1156 + 10),   /* [sensor ] */
      2072      , 1166      ,   /* [bns    ] */
      2048      , 1152      ,   /* [bcrop  ] */
      2048      , 1152      ,   /* [bds    ] */
      1920      , 1080      ,   /* [target ] */
    },
    /*  4:3 (Single) */
    { SIZE_RATIO_4_3,
     (2056 + 16),(1156 + 10),   /* [sensor ] */
      2072      , 1166      ,   /* [bns    ] */
      1536      , 1152      ,   /* [bcrop  ] */
      1536      , 1152      ,   /* [bds    ] */
      1440      , 1080      ,   /* [target ] */
    },
    /*  1:1 (Single, Dual) */
    { SIZE_RATIO_1_1,
     (2056 + 16),(1156 + 10),   /* [sensor ] */
      2072      , 1166      ,   /* [bns    ] */
      1152      , 1152      ,   /* [bcrop  ] */
      1152      , 1152      ,   /* [bds  ] */
      1088      , 1088      ,   /* [target ] */
    },
    /* 3:2 (Single, Dual) */
    { SIZE_RATIO_3_2,
     (2056 + 16),(1156 + 10),   /* [sensor ] */
      2072      , 1166      ,   /* [bns    ] */
      1728      , 1152      ,   /* [bcrop  ] */
      1728      , 1152      ,   /* [bds    ] */
      1616      , 1080      ,   /* [target ] */
    },
    /* 5:4 (Single, Dual) */
    { SIZE_RATIO_5_4,
     (2056 + 16),(1156 + 10),   /* [sensor ] */
      2072      , 1166      ,   /* [bns    ] */
      1440      , 1152      ,   /* [bcrop  ] */
      1440      , 1152      ,   /* [bds    ] */
      1344      , 1080      ,   /* [target ] */
    },
    /* 5:3 (Single, Dual) */
    { SIZE_RATIO_5_3,
     (2056 + 16),(1156 + 10),   /* [sensor ] */
      2072      , 1166      ,   /* [bns    ] */
      1920      , 1152      ,   /* [bcrop  ] */
      1920      , 1152      ,   /* [bds    ] */
      1792      , 1080      ,   /* [target ] */
    },
    /* 11:9 (Single, Dual) */
    { SIZE_RATIO_11_9,
     (2056 + 16),(1156 + 10),   /* [sensor ] */
      2072      , 1166      ,   /* [bns    ] */
      1408      , 1152      ,   /* [bcrop  ] */
      1408      , 1152      ,   /* [bds    ] */
      1312      , 1080      ,   /* [target ] */
    }
};

static int VIDEO_SIZE_LUT_60FPS_HIGH_SPEED_3M2[][SIZE_OF_LUT] =
{
    /* Binning   = ON
       BNS ratio = 1.0
       BDS       = ON */

    /*  FHD_60  16:9 (Single) */
    { SIZE_RATIO_16_9,
     (2056 + 16),(1156 + 10),   /* [sensor ] */
      2072      , 1166      ,   /* [bns    ] */
      2056      , 1156      ,   /* [bcrop  ] */
      1920      , 1080      ,   /* [bds    ] */
      1920      , 1080      ,   /* [target ] */
    }
};

static int VIDEO_SIZE_LUT_120FPS_HIGH_SPEED_3M2[][SIZE_OF_LUT] =
{
    /* Binning   = ON
       BNS ratio = 1.0
       BDS       = ON */

    /*   HD_120  16:9 (Single) */
    { SIZE_RATIO_16_9,
     (1020 + 16),( 574 + 10),   /* [sensor ] */
      1036      ,  584      ,   /* [bns    ] */
      1008      ,  574      ,   /* [bcrop  ] */
      1008      ,  574      ,   /* [bds    ] */
      800       ,  480      ,   /* [target ] */
    }
};

static int S5K3M2_PREVIEW_LIST[][SIZE_OF_RESOLUTION] =
{
#if defined(CAMERA_LCD_SIZE) && (CAMERA_LCD_SIZE >= LCD_SIZE_1920_1080)
    { 1920, 1080, SIZE_RATIO_16_9},
    { 1440, 1080, SIZE_RATIO_4_3},
    { 1088, 1088, SIZE_RATIO_1_1},
#endif
    { 1280,  720, SIZE_RATIO_16_9},
    { 1056,  704, SIZE_RATIO_3_2},
    {  960,  720, SIZE_RATIO_4_3},
    {  720,  720, SIZE_RATIO_1_1},
    {  720,  480, SIZE_RATIO_3_2},
    {  640,  480, SIZE_RATIO_4_3},
    {  352,  288, SIZE_RATIO_11_9},
    {  320,  240, SIZE_RATIO_4_3},
};

static int S5K3M2_HIDDEN_PREVIEW_LIST[][SIZE_OF_RESOLUTION] =
{
#if defined(CAMERA_LCD_SIZE) && (CAMERA_LCD_SIZE >= LCD_SIZE_1920_1080)
    { 3840, 2160, SIZE_RATIO_16_9},
    { 1600, 1200, SIZE_RATIO_4_3},
    { 1280,  960, SIZE_RATIO_4_3},
#endif
    { 1056,  864, SIZE_RATIO_11_9},
    {  528,  432, SIZE_RATIO_11_9},
    {  800,  480, SIZE_RATIO_5_3},
    {  672,  448, SIZE_RATIO_3_2},
    {  480,  320, SIZE_RATIO_3_2},
    {  480,  270, SIZE_RATIO_16_9},
};

static int S5K3M2_PICTURE_LIST[][SIZE_OF_RESOLUTION] =
{
    { 4128, 3096, SIZE_RATIO_4_3},
    { 4128, 2322, SIZE_RATIO_16_9},
    { 3088, 3088, SIZE_RATIO_1_1},
    { 3264, 2448, SIZE_RATIO_4_3},
    { 3264, 1836, SIZE_RATIO_16_9},
    { 2448, 2448, SIZE_RATIO_1_1},
    { 2048, 1536, SIZE_RATIO_4_3},
    { 2048, 1152, SIZE_RATIO_16_9},
    { 1920, 1080, SIZE_RATIO_16_9},
    { 1280,  720, SIZE_RATIO_16_9},
    {  960,  720, SIZE_RATIO_4_3},
    {  640,  480, SIZE_RATIO_4_3},
    {  320,  240, SIZE_RATIO_4_3},
};

static int S5K3M2_HIDDEN_PICTURE_LIST[][SIZE_OF_RESOLUTION] =
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

static int S5K3M2_THUMBNAIL_LIST[][SIZE_OF_RESOLUTION] =
{
    {  512,  288, SIZE_RATIO_16_9},
    {  320,  240, SIZE_RATIO_4_3},
    {    0,    0, SIZE_RATIO_1_1}
};

static int S5K3M2_VIDEO_LIST[][SIZE_OF_RESOLUTION] =
{
    { 1920, 1080, SIZE_RATIO_16_9},
    { 1440, 1080, SIZE_RATIO_4_3},
    { 1280,  720, SIZE_RATIO_16_9},
    {  960,  720, SIZE_RATIO_4_3},
    {  800,  448, SIZE_RATIO_16_9},
    {  720,  480, SIZE_RATIO_3_2},
    {  640,  480, SIZE_RATIO_4_3},
    {  480,  320, SIZE_RATIO_3_2},
    {  352,  288, SIZE_RATIO_11_9},
    {  320,  240, SIZE_RATIO_4_3},
    {  176,  144, SIZE_RATIO_11_9}
};

static int S5K3M2_HIDDEN_VIDEO_LIST[][SIZE_OF_RESOLUTION] =
{
#ifdef USE_UHD_RECORDING
    { 3840, 2160, SIZE_RATIO_16_9}
#endif
};

static int S5K3M2_FPS_RANGE_LIST[][2] =
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

static int S5K3M2_HIDDEN_FPS_RANGE_LIST[][2] =
{
    {  30000,  60000},
    {  60000,  60000},
    {  60000, 120000},
    { 120000, 120000},
};
#endif
