/*
 * Copyright (C) 2015, Samsung Electronics Co. LTD
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

#ifndef EXYNOS_VPU_TEST_API_H
#define EXYNOS_VPU_TEST_API_H

#ifdef __cplusplus
extern "C" {
#endif

VX_API_ENTRY void VX_API_CALL vpu_absDiff_test(void);
VX_API_ENTRY void VX_API_CALL vpu_colorConv_test(void);

#ifdef __cplusplus
}
#endif

#endif
