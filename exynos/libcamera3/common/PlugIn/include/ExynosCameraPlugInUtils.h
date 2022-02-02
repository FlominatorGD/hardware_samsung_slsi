/*
 * Copyright@ Samsung Electronics Co. LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
*/

/*!
 * \file      ExynosCmaeraPlugInUtils.h
 * \brief     header file for ExynosCmaeraPlugInUtils
 * \author    Teahyung, Kim(tkon.kim@samsung.com)
 * \date      2017/09/12
 *
 * <b>Revision History: </b>
 * - 2017/09/12 : Teahyung, Kim(tkon.kim@samsung.com) \n
 *   Initial version
 */

#ifndef EXYNOS_CAMERA_PLUGIN_UTILS_H
#define EXYNOS_CAMERA_PLUGIN_UTILS_H

#include <utils/threads.h>

#include "PlugInCommon.h"

namespace android {

#define PLUGIN_FILE_DUMP_PATH "/data/camera/"
typedef struct PlugInBuffer {
    int size;
    int fd;
    char *addr;
} PlugInBuffer_t;

/*
 * Thread Helper Class
 */
template<typename T>
class ExynosCameraPlugInUtilsThread : public Thread {

typedef bool (T::*thread_loop)();
public:
    ExynosCameraPlugInUtilsThread(
        T *hw,
        thread_loop loop,
        const char *name,
        int32_t priority = PRIORITY_DEFAULT)
    {
        m_hardware   = hw;
        m_threadLoop = loop;
        m_name       = name;
        m_priority   = priority;
        m_flatStart  = false;
    }

    virtual status_t readyToRun() {
        m_flatStart = true;

        return Thread::readyToRun();
    }

    virtual status_t setup(
        T *hw,
        thread_loop loop,
        const char *name,
        int32_t priority = PRIORITY_DEFAULT)
    {
        m_hardware   = hw;
        m_threadLoop = loop;
        m_name       = name;
        m_priority   = priority;
        return NO_ERROR;
    }

    virtual status_t run(void) {

        ALOGV("DEBUG(%s):Thread(%s) start running", __FUNCTION__, m_name);

        return Thread::run(m_name, m_priority, 0);
    }

    virtual status_t run(int32_t priority, size_t stack = 0) {

        ALOGV("DEBUG(%s):Thread(%s) start running", __FUNCTION__, m_name);
        if (m_priority != priority)
            m_priority = priority;

        return Thread::run(m_name, m_priority, stack);
    }

    virtual void stop(void) {
        m_flatStart = false;
        requestExit();
    }

private:
    virtual bool threadLoop() {
        bool ret = (m_hardware->*m_threadLoop)();

        if (m_flatStart == false)
            ret = m_flatStart;

        return ret;
    }

private:
    T           *m_hardware;
    const char  *m_name;
    thread_loop m_threadLoop;
    int32_t     m_priority;
    bool        m_flatStart;
};

/*
 * ION memory helper Class
 */
class ExynosCameraPlugInUtilsIonAllocator
{
public:
    ExynosCameraPlugInUtilsIonAllocator(bool isCached);
    virtual ~ExynosCameraPlugInUtilsIonAllocator();

    status_t alloc(int size, int *fd, char **addr, bool mapNeeded);
    status_t free(int *fd, __unused int size, char **addr, bool mapNeeded);

private:
    int     m_ionClient;
    size_t  m_ionAlign;
    unsigned int m_ionHeapMask;
    unsigned int m_ionFlags;
};

/*
 * Utility Functions
 */
status_t dumpToFile(char *filename, PlugInBuffer *planes, int planeCount, int index);
}
#endif //EXYNOS_CAMERA_PLUGIN_UTILS_H
