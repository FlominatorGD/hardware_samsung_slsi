/*
 * Copyright (c) 2013-2017 TRUSTONIC LIMITED
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the TRUSTONIC LIMITED nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#define LOG_TAG "vendor.trustonic.tee@1.0-service"
//#define LOG_NDEBUG 0

#include <hidl/HidlTransportSupport.h>
#include <utils/Log.h>

#include "Tee.h"
#include "Tui.h"

using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;

using vendor::trustonic::tee::V1_0::ITee;
using vendor::trustonic::tee::V1_0::implementation::Tee;

using vendor::trustonic::tee::tui::V1_0::ITui;
using vendor::trustonic::tee::tui::V1_0::implementation::Tui;

int main(int /*argc*/, char** /*argv*/) {
    configureRpcThreadpool(10, true);

    ::android::sp<ITee> tee = new Tee;
    ::android::sp<ITui> tui = new Tui;

    ::android::status_t status_tee = tee->registerAsService();
    LOG_ALWAYS_FATAL_IF(status_tee != ::android::OK, "Could not register ITee");
    ::android::status_t status_tui = tui->registerAsService();
    LOG_ALWAYS_FATAL_IF(status_tui != ::android::OK, "Could not register ITui");

    // other interface registration comes here
    joinRpcThreadpool();
    return 0;
}
