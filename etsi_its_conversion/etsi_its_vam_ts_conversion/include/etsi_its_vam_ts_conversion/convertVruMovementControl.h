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
  asn1/raw/vam-ts103300_3/VAM-PDU-Descriptions.asn \
  asn1/patched/vam-ts103300_3/cdd/ETSI-ITS-CDD.asn \
  -t \
  vam_ts \
  -o \
  etsi_its_conversion/etsi_its_vam_ts_conversion/include/etsi_its_vam_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 *  This DE indicates the status of the possible human control over a VRU vehicle.
 *
 * The value shall be set to:
 * - 0 `unavailable`                 - to indicate that the information is unavailable,
 * - 1 `braking`                     - to indicate that the VRU is braking,
 * - 2 `hardBraking`                 - to indicate that the VRU is braking hard,
 * - 3 `stopPedaling`                - to indicate that the VRU stopped pedaling,
 * - 4 `brakingAndStopPedaling`      - to indicate that the VRU stopped pedaling an is braking,
 * - 5 `hardBrakingAndStopPedaling`  - to indicate that the VRU stopped pedaling an is braking hard,
 * - 6 `noReaction`                  - to indicate that the VRU is not changing its behavior.
 * - 7 to 255                        - are reserved for future usage. Value 255 is set to "max" in order to bound the size of the encoded field.
 *
 * @category: VRU information
 * @revision: Created in V2.1.1
 *
VruMovementControl ::= ENUMERATED {
    unavailable                (0), 
    braking                    (1), 
    hardBraking                (2), 
    stopPedaling               (3), 
    brakingAndStopPedaling     (4), 
    hardBrakingAndStopPedaling (5), 
    noReaction                 (6), 
    max                        (255)
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_vam_ts_coding/vam_ts_VruMovementControl.h>

#ifdef ROS1
#include <etsi_its_vam_ts_msgs/VruMovementControl.h>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs;
#else
#include <etsi_its_vam_ts_msgs/msg/vru_movement_control.hpp>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs::msg;
#endif


namespace etsi_its_vam_ts_conversion {

void toRos_VruMovementControl(const vam_ts_VruMovementControl_t& in, vam_ts_msgs::VruMovementControl& out) {
  out.value = in;
}

void toStruct_VruMovementControl(const vam_ts_msgs::VruMovementControl& in, vam_ts_VruMovementControl_t& out) {
  memset(&out, 0, sizeof(vam_ts_VruMovementControl_t));
  out = in.value;
}

}
