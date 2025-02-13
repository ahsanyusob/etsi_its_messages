/** ============================================================================
MIT License

Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
============================================================================= */

/** Auto-generated by https://github.com/ika-rwth-aachen/etsi_its_messages -----
python3 \
  utils/codegen/codegen-py/asn1ToConversionHeader.py \
  asn1/raw/denm_ts103831/DENM-PDU-Descriptions.asn \
  asn1/patched/denm_ts103831/cdd/ETSI-ITS-CDD.asn \
  -t \
  denm_ts \
  -o \
  etsi_its_conversion/etsi_its_denm_ts_conversion/include/etsi_its_denm_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
* 
 * This DE indicates the angular speed confidence value which represents the estimated absolute accuracy of an angular speed value with a default confidence level of 95 %.
 * If required, the confidence level can be defined by the corresponding standards applying this DE.
 * For correlation computation, maximum interval levels can be assumed.
 *
 * The value shall be set to:
 * - 0 - `degSec-01`   - if the accuracy is equal to or less than 1 degree/second,
 * - 1 - `degSec-02`   - if the accuracy is equal to or less than 2 degrees/second and greater than 1 degree/second,
 * - 2 - `degSec-05`   - if the accuracy is equal to or less than 5 degrees/second and greater than 2 degrees/second,
 * - 3 - `degSec-10`   - if the accuracy is equal to or less than 10 degrees/second and greater than 5 degrees/second,
 * - 4 - `degSec-20`   - if the accuracy is equal to or less than 20 degrees/second and greater than 10 degrees/second,
 * - 5 - `degSec-50`   - if the accuracy is equal to or less than 50 degrees/second and greater than 20 degrees/second,
 * - 6 - `outOfRange`  - if the accuracy is out of range, i.e. greater than 50 degrees/second,
 * - 7 - `unavailable` - if the accuracy information is unavailable.
 * 
 * @category: Kinematic information
 * @revision: Created in V2.1.1
*
AngularSpeedConfidence ::= ENUMERATED {
    degSec-01   (0), 
    degSec-02   (1),  
    degSec-05   (2), 
    degSec-10   (3), 
    degSec-20   (4),  
    degSec-50   (5), 
    outOfRange  (6),   
    unavailable (7)   
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_ts_coding/denm_ts_AngularSpeedConfidence.h>

#ifdef ROS1
#include <etsi_its_denm_ts_msgs/AngularSpeedConfidence.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/angular_speed_confidence.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_AngularSpeedConfidence(const denm_ts_AngularSpeedConfidence_t& in, denm_ts_msgs::AngularSpeedConfidence& out) {
  out.value = in;
}

void toStruct_AngularSpeedConfidence(const denm_ts_msgs::AngularSpeedConfidence& in, denm_ts_AngularSpeedConfidence_t& out) {
  memset(&out, 0, sizeof(denm_ts_AngularSpeedConfidence_t));
  out = in.value;
}

}
