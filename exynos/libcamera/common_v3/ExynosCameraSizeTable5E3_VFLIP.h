/*
**
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

#ifndef EXYNOS_CAMERA_LUT_5E3_H
#define EXYNOS_CAMERA_LUT_5E3_H

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
    Sensor Margin Height = 12
-----------------------------*/

static int PREVIEW_SIZE_LUT_5E3[][SIZE_OF_LUT] =
{
    /* Binning   = OFF
       BNS ratio = 1.0
       BDS       = OFF  */

    /* 16:9 (Single, Dual) */
    { SIZE_RATIO_16_9,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      2560      , 1440      ,   /* [bcrop  ] */
      2560      , 1440      ,   /* [bds    ] */
      1920      , 1080      ,   /* [target ] */
    },
    /*  4:3 (Single, Dual) */
    { SIZE_RATIO_4_3,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      2560      , 1920      ,   /* [bcrop  ] */
      2560      , 1920      ,   /* [bds    ] */
      1440      , 1080      ,   /* [target ] */
    },
    /*  1:1 (Single, Dual) */
    { SIZE_RATIO_1_1,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      1920      , 1920      ,   /* [bcrop  ] */
      1920      , 1920      ,   /* [bds    ] */
      1072      , 1072      ,   /* [target ] */
    },
    /* 3:2 (Single) */
    { SIZE_RATIO_3_2,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      2560      , 1708      ,   /* [bcrop  ] */
      2560      , 1708      ,   /* [bds    ] */
      1616      , 1080      ,   /* [target ] */
    },
    /* 5:4 (Single) */
    { SIZE_RATIO_5_4,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      2400      , 1920      ,   /* [bcrop  ] */
      2400      , 1920      ,   /* [bds    ] */
      1344      , 1080      ,   /* [target ] */
    },
    /* 5:3 (Single) */
    { SIZE_RATIO_5_3,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      2560      , 1536      ,   /* [bcrop  ] */
      2560      , 1536      ,   /* [bds    ] */
      1792      , 1080      ,   /* [target ] */
    },
    /* 11:9 (Single) */
    { SIZE_RATIO_11_9,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      2352      , 1920      ,   /* [bcrop  ] */
      2352      , 1920      ,   /* [bds    ] */
      1312      , 1080      ,   /* [target ] */
    }
};

static int PICTURE_SIZE_LUT_5E3[][SIZE_OF_LUT] =
{
    { SIZE_RATIO_16_9,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      2560      , 1440      ,   /* [bcrop  ] */
      2560      , 1440      ,   /* [bds    ] */
      2560      , 1440      ,   /* [target  ] */
    },
    /*  4:3 (Single, Dual) */
    { SIZE_RATIO_4_3,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      2560      , 1920      ,   /* [bcrop  ] */
      2560      , 1920      ,   /* [bds    ] */
      2560      , 1920      ,   /* [target ] */
    },
    /*  1:1 (Single) */
    { SIZE_RATIO_1_1,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      1920      , 1920      ,   /* [bcrop  ] */
      1920      , 1920      ,   /* [bds    ] */
      1920      , 1920      ,   /* [target ] */
    }
};

static int VIDEO_SIZE_LUT_5E3[][SIZE_OF_LUT] =
{
    /* Binning   = OFF
       BNS ratio = 1.0
       BDS       :NO  */

    /* 16:9 (Single, Dual) */
    { SIZE_RATIO_16_9,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      2560      , 1440      ,   /* [bcrop  ] */
      2560      , 1440      ,   /* [bds    ] */
      1920      , 1080      ,   /* [target ] */
    },
    /*  4:3 (Single, Dual) */
    { SIZE_RATIO_4_3,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      2560      , 1920      ,   /* [bcrop  ] */
      2560      , 1920      ,   /* [bds    ] */
      1440      , 1080      ,   /* [target ] */
    },
    /*  1:1 (Single, Dual) */
    { SIZE_RATIO_1_1,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      1920      , 1920      ,   /* [bcrop  ] */
      1920      , 1920      ,   /* [bds    ] */
      1072      , 1072      ,   /* [target ] */
    },
    /* 3:2 (Single) */
    { SIZE_RATIO_3_2,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      2560      , 1708      ,   /* [bcrop  ] */
      2560      , 1708      ,   /* [bds    ] */
      1616      , 1080      ,   /* [target ] */
    },
    /* 5:4 (Single) */
    { SIZE_RATIO_5_4,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      2400      , 1920      ,   /* [bcrop  ] */
      2400      , 1920      ,   /* [bds    ] */
      1344      , 1080      ,   /* [target ] */
    },
    /* 5:3 (Single) */
    { SIZE_RATIO_5_3,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      2560      , 1536      ,   /* [bcrop  ] */
      2560      , 1536      ,   /* [bds    ] */
      1792      , 1080      ,   /* [target ] */
    },
    /* 11:9 (Single) */
    { SIZE_RATIO_11_9,
     (2560 + 16),(1920 + 12),   /* [sensor ] */
      2576      , 1932      ,   /* [bns    ] */
      2352      , 1920      ,   /* [bcrop  ] */
      2352      , 1920      ,   /* [bds    ] */
      1312      , 1080      ,   /* [target ] */
    }
};
static int VTCALL_SIZE_LUT_5E3[][SIZE_OF_LUT] =
{
    { SIZE_RATIO_16_9,
     (1264 + 16),(950 + 10),   /* [sensor ] */
      1280, 960,        /* [bns    ] */
      1264, 712,       /* [bcrop  ] */
      1248, 704,       /* [bds    ] */
      1248, 704        /* [target ] */
    },
    { SIZE_RATIO_4_3,
     (1264 + 16),(950 + 10),   /* [sensor ] */
      1280, 960,        /* [bns    ] */
      1264, 948,      /* [bcrop  ] */
      960, 720,         /* [bds    ] */
      960, 720          /* [target ] */
    },
    { SIZE_RATIO_1_1,
     (1264 + 16),(950 + 10),   /* [sensor ] */
      1280, 960,        /* [bns    ] */
      948,  948,       /* [bcrop  ] */
      720, 720,         /* [bds    ] */
      720, 720          /* [target ] */
    },
    { SIZE_RATIO_11_9,
     (1264 + 16),(950 + 10),   /* [sensor ] */
      1280, 960,        /* [bns    ] */
      1152, 948,        /* [bcrop  ] */
      352, 288,         /* [bds    ] */
      352, 288        /* [target ] */
    }
};

static int S5K5E3_PREVIEW_LIST[][SIZE_OF_RESOLUTION] =
{
#if defined(CAMERA_LCD_SIZE) && (CAMERA_LCD_SIZE >= LCD_SIZE_1920_1080)
    { 1920, 1080, SIZE_RATIO_16_9},
    { 1440, 1080, SIZE_RATIO_4_3},
    { 1072, 1072, SIZE_RATIO_1_1},
#endif
    { 1280,  720, SIZE_RATIO_16_9},
    { 1056,  704, SIZE_RATIO_3_2},
    {  960,  720, SIZE_RATIO_4_3},
    {  880,  720, SIZE_RATIO_11_9},
    {  736,  736, SIZE_RATIO_1_1},
    {  720,  480, SIZE_RATIO_3_2},
    {  640,  480, SIZE_RATIO_4_3},
    {  352,  288, SIZE_RATIO_11_9},
    {  320,  240, SIZE_RATIO_4_3},
};

static int S5K5E3_HIDDEN_PREVIEW_LIST[][SIZE_OF_RESOLUTION] =
{
#if !(defined(CAMERA_LCD_SIZE) && (CAMERA_LCD_SIZE >= LCD_SIZE_1920_1080))
    { 1920, 1080, SIZE_RATIO_16_9},
    { 1440, 1080, SIZE_RATIO_4_3},
    { 1072, 1072, SIZE_RATIO_1_1},
#endif
    { 1056,  864, SIZE_RATIO_11_9},
    { 1024,  768, SIZE_RATIO_4_3},
    {  800,  600, SIZE_RATIO_4_3},
    {  800,  480, SIZE_RATIO_5_3},
    {  800,  450, SIZE_RATIO_16_9},
    {  720,  720, SIZE_RATIO_1_1},
    {  720,  480, SIZE_RATIO_3_2},
    {  672,  448, SIZE_RATIO_3_2},
    {  528,  432, SIZE_RATIO_11_9},
    {  480,  320, SIZE_RATIO_3_2},
    {  480,  270, SIZE_RATIO_16_9},
#if defined (USE_HORIZONTAL_UI_TABLET_4G_VT)
    {  480,  640, SIZE_RATIO_3_4},
#endif
};

static int S5K5E3_PICTURE_LIST[][SIZE_OF_RESOLUTION] =
{
    { 2560, 1440, SIZE_RATIO_16_9},
    { 2560, 1920, SIZE_RATIO_4_3},
    { 2048, 1536, SIZE_RATIO_4_3},
    { 2048, 1152, SIZE_RATIO_16_9},
    { 1920, 1920, SIZE_RATIO_1_1},
    { 1920, 1080, SIZE_RATIO_16_9},
    { 1440, 1080, SIZE_RATIO_4_3},
    { 1280,  720, SIZE_RATIO_16_9},
    { 1072, 1072, SIZE_RATIO_1_1},
    {  960,  720, SIZE_RATIO_4_3},
    {  640,  480, SIZE_RATIO_4_3},
};

static int S5K5E3_HIDDEN_PICTURE_LIST[][SIZE_OF_RESOLUTION] =
{
    { 1600, 1200, SIZE_RATIO_4_3},
    { 1280,  960, SIZE_RATIO_4_3},
    { 1024,  768, SIZE_RATIO_4_3},
    {  800,  600, SIZE_RATIO_4_3},
    {  800,  480, SIZE_RATIO_5_3},
    {  800,  450, SIZE_RATIO_16_9},
    {  720,  480, SIZE_RATIO_3_2},
    {  512,  384, SIZE_RATIO_4_3},
    {  512,  288, SIZE_RATIO_11_9},
    {  480,  320, SIZE_RATIO_3_2},
    {  320,  240, SIZE_RATIO_4_3},
    {  320,  180, SIZE_RATIO_16_9},
};

static int S5K5E3_THUMBNAIL_LIST[][SIZE_OF_RESOLUTION] =
{
    {  512,  384, SIZE_RATIO_4_3},
    {  512,  288, SIZE_RATIO_16_9},
    {  384,  384, SIZE_RATIO_1_1},
    {  320,  240, SIZE_RATIO_4_3},
    {    0,    0, SIZE_RATIO_1_1}
};

static int S5K5E3_VIDEO_LIST[][SIZE_OF_RESOLUTION] =
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

static int S5K5E3_HIDDEN_VIDEO_LIST[][SIZE_OF_RESOLUTION] =
{
#if defined (USE_HORIZONTAL_UI_TABLET_4G_VT)
    {  480,  640, SIZE_RATIO_3_4},
#endif
};

static int S5K5E3_FPS_RANGE_LIST[][2] =
{
    {   5000,   5000},
    {   7000,   7000},
    {  15000,  15000},
    {  24000,  24000},
    {   4000,  30000},
    {   8000,  30000},
    {  10000,  30000},
    {  15000,  30000},
    {  30000,  30000},
};

static int S5K5E3_HIDDEN_FPS_RANGE_LIST[][2] =
{
    {  30000,  60000},
    {  60000,  60000},
    {  60000, 120000},
    { 120000, 120000},
};
#endif
