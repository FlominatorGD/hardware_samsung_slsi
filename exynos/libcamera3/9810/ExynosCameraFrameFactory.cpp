/*
**
** Copyright 2017, Samsung Electronics Co. LTD
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

/* #define LOG_NDEBUG 0 */
#define LOG_TAG "ExynosCameraFrameFactory"
#include <cutils/log.h>

#include "ExynosCameraFrameFactory.h"

namespace android {

enum NODE_TYPE ExynosCameraFrameFactory::getNodeType(uint32_t pipeId)
{
    enum NODE_TYPE nodeType = INVALID_NODE;

    switch (pipeId) {
    case PIPE_FLITE:
    case PIPE_FLITE_REPROCESSING:
        nodeType = OUTPUT_NODE;
        break;
    case PIPE_VC0:
    case PIPE_VC0_REPROCESSING:
        nodeType = CAPTURE_NODE_1;
        break;
#ifdef SUPPORT_DEPTH_MAP
    case PIPE_VC1:
        nodeType = CAPTURE_NODE_2;
        break;
#endif
    case PIPE_3AA:
        if (m_flagFlite3aaOTF == HW_CONNECTION_MODE_M2M) {
            nodeType = OUTPUT_NODE;
        } else {
            nodeType = OTF_NODE_7;
        }
        break;
    case PIPE_3AA_REPROCESSING:
        nodeType = OUTPUT_NODE;
        break;
    case PIPE_3AC:
    case PIPE_3AC_REPROCESSING:
        nodeType = CAPTURE_NODE_3;
        break;
    case PIPE_3AP:
    case PIPE_3AP_REPROCESSING:
        if (m_flag3aaIspOTF == HW_CONNECTION_MODE_M2M) {
            nodeType = CAPTURE_NODE_4;
        } else {
            nodeType = OTF_NODE_1;
        }
        break;
    case PIPE_ISP:
    case PIPE_ISP_REPROCESSING:
        if (m_flag3aaIspOTF == HW_CONNECTION_MODE_M2M) {
            nodeType = OUTPUT_NODE;
        } else {
            nodeType = OTF_NODE_2;
        }
        break;
    case PIPE_ISPC:
    case PIPE_ISPC_REPROCESSING:
        nodeType = CAPTURE_NODE_5;
        break;
    case PIPE_ISPP:
    case PIPE_ISPP_REPROCESSING:
        if (m_flagIspMcscOTF == HW_CONNECTION_MODE_M2M
#ifdef USE_DUAL_CAMERA
            || m_flagIspDcpOTF == HW_CONNECTION_MODE_M2M
#endif
                ) {
            nodeType = CAPTURE_NODE_6;
        } else {
            nodeType = OTF_NODE_3;
        }
        break;
    case PIPE_HWFC_JPEG_DST_REPROCESSING:
        nodeType = CAPTURE_NODE_7;
        break;
    case PIPE_HWFC_JPEG_SRC_REPROCESSING:
        nodeType = CAPTURE_NODE_8;
        break;
    case PIPE_HWFC_THUMB_SRC_REPROCESSING:
        nodeType = CAPTURE_NODE_9;
        break;
    case PIPE_HWFC_THUMB_DST_REPROCESSING:
        nodeType = CAPTURE_NODE_10;
        break;
#ifdef USE_DUAL_CAMERA
    case PIPE_DCPS0:
    case PIPE_DCPS0_REPROCESSING:
        if (m_flagIspDcpOTF == HW_CONNECTION_MODE_M2M) {
            nodeType = OUTPUT_NODE;
        } else {
            nodeType = CAPTURE_NODE_11;
        }
        break;
    case PIPE_DCPS1:
    case PIPE_DCPS1_REPROCESSING:
        nodeType = CAPTURE_NODE_12;
        break;
    case PIPE_DCPC0:
    case PIPE_DCPC0_REPROCESSING:
        nodeType = CAPTURE_NODE_13;
        break;
    case PIPE_DCPC1:
    case PIPE_DCPC1_REPROCESSING:
        nodeType = CAPTURE_NODE_14;
        break;
    case PIPE_DCPC2:
    case PIPE_DCPC2_REPROCESSING:
        nodeType = CAPTURE_NODE_15;
        break;
    case PIPE_DCPC3:
    case PIPE_DCPC3_REPROCESSING:
        nodeType = CAPTURE_NODE_16;
        break;
    case PIPE_DCPC4:
    case PIPE_DCPC4_REPROCESSING:
        nodeType = CAPTURE_NODE_17;
        break;
#endif
    case PIPE_MCSC:
    case PIPE_MCSC_REPROCESSING:
        if (m_flagIspMcscOTF == HW_CONNECTION_MODE_M2M
#ifdef USE_DUAL_CAMERA
            || m_flagDcpMcscOTF == HW_CONNECTION_MODE_M2M
#endif
           ) {
            nodeType = OUTPUT_NODE;
        } else {
            nodeType = OTF_NODE_6;
        }
        break;
    case PIPE_MCSC0:
    case PIPE_MCSC0_REPROCESSING:
        nodeType = CAPTURE_NODE_18;
        break;
    case PIPE_MCSC1:
    case PIPE_MCSC1_REPROCESSING:
        nodeType = CAPTURE_NODE_19;
        break;
    case PIPE_MCSC2:
    case PIPE_MCSC2_REPROCESSING:
        nodeType = CAPTURE_NODE_20;
        break;
    case PIPE_MCSC3_REPROCESSING:
        nodeType = CAPTURE_NODE_21;
        break;
    case PIPE_MCSC4_REPROCESSING:
        nodeType = CAPTURE_NODE_22;
        break;
    case PIPE_MCSC5:
    case PIPE_MCSC5_REPROCESSING:
        nodeType = CAPTURE_NODE_23;
        break;
    case PIPE_VRA:
    case PIPE_VRA_REPROCESSING:
    case PIPE_GDC:
    case PIPE_GSC_REPROCESSING3:
    case PIPE_GSC_REPROCESSING2:
    case PIPE_JPEG_REPROCESSING:
    case PIPE_JPEG:
#ifdef USE_DUAL_CAMERA
    case PIPE_FUSION:
#endif
    case PIPE_GSC:
        nodeType = OUTPUT_NODE;
        break;
    case PIPE_ME:
        nodeType = CAPTURE_NODE_11;
        break;
    default:
        android_printAssert(NULL, LOG_TAG, "ASSERT(%s[%d]):Unexpected pipe_id(%d), assert!!!!",
             __FUNCTION__, __LINE__, pipeId);
        break;
    }

    return nodeType;
}

void ExynosCameraFrameFactory::connectScenario(int pipeId, int scenario)
{
    android_printAssert(NULL, LOG_TAG, "ASSERT(%s[%d]):Function is NOT implemented! pipeId %d scenario %d",
            __FUNCTION__, __LINE__, pipeId, scenario);
}

void ExynosCameraFrameFactory::startScenario(int pipeId)
{
    android_printAssert(NULL, LOG_TAG, "ASSERT(%s[%d]):Function is NOT implemented! pipeId %d",
            __FUNCTION__, __LINE__, pipeId);
}

void ExynosCameraFrameFactory::stopScenario(int pipeId, bool suspendFlag)
{
    android_printAssert(NULL, LOG_TAG, "ASSERT(%s[%d]):Function is NOT implemented! pipeId %d",
            __FUNCTION__, __LINE__, pipeId);
}

int ExynosCameraFrameFactory::getScenario(int pipeId)
{
    android_printAssert(NULL, LOG_TAG, "ASSERT(%s[%d]):Function is NOT implemented! pipeId %d",
            __FUNCTION__, __LINE__, pipeId);

    return -1;
}

status_t ExynosCameraFrameFactory::m_initFlitePipe(int sensorW, int sensorH, uint32_t frameRate)
{
    CLOGI("");

    status_t ret = NO_ERROR;
    camera_pipe_info_t pipeInfo[MAX_NODE];

    int pipeId = PIPE_FLITE;

    if (m_parameters->getHwConnectionMode(PIPE_FLITE, PIPE_3AA) != HW_CONNECTION_MODE_M2M) {
        pipeId = PIPE_3AA;
    }

    /* FLITE is old pipe, node type is 0 */
    enum NODE_TYPE nodeType = (enum NODE_TYPE)0;
    enum NODE_TYPE leaderNodeType = OUTPUT_NODE;

    ExynosRect tempRect;
    struct ExynosConfigInfo *config = m_parameters->getConfig();
    int maxSensorW = 0, maxSensorH = 0, hwSensorW = 0, hwSensorH = 0;
    int bayerFormat = m_parameters->getBayerFormat(PIPE_FLITE);
    int perFramePos = 0;

#ifdef DEBUG_RAWDUMP
    if (m_parameters->checkBayerDumpEnable()) {
        bayerFormat = CAMERA_DUMP_BAYER_FORMAT;
    }
#endif

    CLOGI("SensorSize(%dx%d)", sensorW, sensorH);

    /* set BNS ratio */
    int bnsScaleRatio = 1000;
    ret = m_pipes[pipeId]->setControl(V4L2_CID_IS_S_BNS, bnsScaleRatio);
    if (ret != NO_ERROR) {
        CLOGE("Set BNS(%.1f) fail, ret(%d)", (float)(bnsScaleRatio / 1000), ret);
    } else {
        int bnsSize = 0;

        ret = m_pipes[pipeId]->getControl(V4L2_CID_IS_G_BNS_SIZE, &bnsSize);
        if (ret != NO_ERROR) {
            CLOGE("Get BNS size fail, ret(%d)", ret);
        } else {
            int bnsWidth = bnsSize >> 16;
            int bnsHeight = bnsSize & 0xffff;
            CLOGI("BNS scale down ratio(%.1f), size (%dx%d)",
                     (float)(bnsScaleRatio / 1000), bnsWidth, bnsHeight);

            m_parameters->setBnsSize(bnsWidth, bnsHeight);
        }
    }

    return NO_ERROR;
}

int ExynosCameraFrameFactory::m_getSensorId(unsigned int nodeNum, unsigned int connectionMode,
                                             bool flagLeader, bool reprocessing, int sensorScenario)
{
    /* sub 100, and make index */
    nodeNum -= FIMC_IS_VIDEO_BAS_NUM;

    unsigned int reprocessingBit = 0;
    unsigned int otfInterfaceBit = 0;
    unsigned int leaderBit = 0;
    unsigned int sensorId = 0;

    if (reprocessing == true)
        reprocessingBit = 1;

    sensorId = m_cameraId;
    /* HACK
     * Driver detects Secure Camera ID as 3, not 4.
     */
    switch (sensorId) {
#ifdef USE_DUAL_CAMERA
    case CAMERA_ID_BACK_1:
        sensorId = 2;
        break;
#endif
    case CAMERA_ID_SECURE:
        sensorId = 3;
        break;
    default:
        break;
    }

    if (flagLeader == true)
        leaderBit = 1;

    if (sensorScenario < 0 ||SENSOR_SCENARIO_MAX <= sensorScenario) {
        android_printAssert(NULL, LOG_TAG, "ASSERT(%s[%d]):Invalid sensorScenario(%d). assert!!!!",
            __FUNCTION__, __LINE__, sensorScenario);
    }

    return ((sensorScenario     << INPUT_SENSOR_SHIFT) & INPUT_SENSOR_MASK) |
           ((reprocessingBit    << INPUT_STREAM_SHIFT) & INPUT_STREAM_MASK) |
           ((sensorId           << INPUT_MODULE_SHIFT) & INPUT_MODULE_MASK) |
           ((nodeNum            << INPUT_VINDEX_SHIFT) & INPUT_VINDEX_MASK) |
           ((connectionMode     << INPUT_MEMORY_SHIFT) & INPUT_MEMORY_MASK) |
           ((leaderBit          << INPUT_LEADER_SHIFT) & INPUT_LEADER_MASK);
}

int ExynosCameraFrameFactory::m_getFliteNodenum(void)
{
    int fliteNodeNum = FIMC_IS_VIDEO_SS0_NUM;

    switch (m_cameraId) {
    case CAMERA_ID_BACK_0:
        fliteNodeNum = MAIN_CAMERA_FLITE_NUM;
        break;
    case CAMERA_ID_FRONT_0:
        fliteNodeNum = FRONT_CAMERA_FLITE_NUM;
        break;
#ifdef USE_DUAL_CAMERA
    case CAMERA_ID_BACK_1:
        fliteNodeNum = MAIN_1_CAMERA_FLITE_NUM;
        break;
    case CAMERA_ID_FRONT_1:
        fliteNodeNum = FRONT_1_CAMERA_FLITE_NUM;
        break;
#endif
       default:
        break;
    }

    return fliteNodeNum;
}

#ifdef SUPPORT_DEPTH_MAP
int ExynosCameraFrameFactory::m_getDepthVcNodeNum(void)
{
    int depthVcNodeNum = FIMC_IS_VIDEO_SS0VC1_NUM;

    depthVcNodeNum = (m_cameraId == CAMERA_ID_BACK) ? MAIN_CAMERA_DEPTH_VC_NUM : FRONT_CAMERA_DEPTH_VC_NUM;

    return depthVcNodeNum;
}
#endif

void ExynosCameraFrameFactory::m_init(void)
{
}

}; /* namespace android */
