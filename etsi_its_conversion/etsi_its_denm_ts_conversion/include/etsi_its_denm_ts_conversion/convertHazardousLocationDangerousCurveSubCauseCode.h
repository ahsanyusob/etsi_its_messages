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
 * This DE represents the sub cause code of the @ref CauseCode  `hazardousLocation-DangerousCurve`.
 * 
 * The value shall be set to:
 * - 0 - `unavailable`                                        - in case further detailed information on the dangerous curve is unavailable,
 * - 1 - `dangerousLeftTurnCurve`                             - in case the dangerous curve is a left turn curve,
 * - 2 - `dangerousRightTurnCurve`                            - in case the dangerous curve is a right turn curve,
 * - 3 - `multipleCurvesStartingWithUnknownTurningDirection`  - in case of multiple curves for which the starting curve turning direction is not known,
 * - 4 - `multipleCurvesStartingWithLeftTurn`                 - in case of multiple curves starting with a left turn curve,
 * - 5 - `multipleCurvesStartingWithRightTurn`                - in case of multiple curves starting with a right turn curve.
 * - 6-255                                                    - are reserved for future usage.
 * 
 * The definition of whether a curve is dangerous may vary according to region and according to vehicle types/mass
 * and vehicle speed driving on the curve. This definition is out of scope of the present document.
 *
 * @category: Traffic information
 * @revision: V1.3.1
 *
HazardousLocation-DangerousCurveSubCauseCode ::= INTEGER {
    unavailable                                       (0), 
    dangerousLeftTurnCurve                            (1), 
    dangerousRightTurnCurve                           (2), 
    multipleCurvesStartingWithUnknownTurningDirection (3), 
    multipleCurvesStartingWithLeftTurn                (4), 
    multipleCurvesStartingWithRightTurn               (5)
} (0..255)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_ts_coding/denm_ts_HazardousLocation-DangerousCurveSubCauseCode.h>
#include <etsi_its_denm_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_denm_ts_msgs/HazardousLocationDangerousCurveSubCauseCode.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/hazardous_location_dangerous_curve_sub_cause_code.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_HazardousLocationDangerousCurveSubCauseCode(const denm_ts_HazardousLocation_DangerousCurveSubCauseCode_t& in, denm_ts_msgs::HazardousLocationDangerousCurveSubCauseCode& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_HazardousLocationDangerousCurveSubCauseCode(const denm_ts_msgs::HazardousLocationDangerousCurveSubCauseCode& in, denm_ts_HazardousLocation_DangerousCurveSubCauseCode_t& out) {
  memset(&out, 0, sizeof(denm_ts_HazardousLocation_DangerousCurveSubCauseCode_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
