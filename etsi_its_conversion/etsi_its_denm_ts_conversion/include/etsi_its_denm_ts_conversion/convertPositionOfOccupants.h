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
 * This DE indicates whether a passenger seat is occupied or whether the occupation status is detectable or not.
 * 
 * The number of row in vehicle seats layout is counted in rows from the driver row backwards from front to the rear
 * of the vehicle.
 * The left side seat of a row refers to the left hand side seen from vehicle rear to front.
 * Additionally, a bit is reserved for each seat row, to indicate if the seat occupation of a row is detectable or not,
 * i.e. `row1NotDetectable (3)`, `row2NotDetectable(8)`, `row3NotDetectable(13)` and `row4NotDetectable(18)`.
 * Finally, a bit is reserved for each row seat to indicate if the seat row is present or not in the vehicle,
 * i.e. `row1NotPresent (4)`, `row2NotPresent (9)`, `row3NotPresent(14)`, `row4NotPresent(19)`.
 * 
 * When a seat is detected to be occupied, the corresponding seat occupation bit shall be set to `1`.
 * For example, when the row 1 left seat is occupied, `row1LeftOccupied(0)` bit shall be set to `1`.
 * When a seat is detected to be not occupied, the corresponding seat occupation bit shall be set to `0`.
 * Otherwise, the value of seat occupation bit shall be set according to the following conditions:
 * - If the seat occupation of a seat row is not detectable, the corresponding bit shall be set to `1`.
 *   When any seat row not detectable bit is set to `1`, all corresponding seat occupation bits of the same row
 *   shall be set to `1`.
 * - If the seat row is not present, the corresponding not present bit of the same row shall be set to `1`.
 *   When any of the seat row not present bit is set to `1`, the corresponding not detectable bit for that row
 *   shall be set to `1`, and all the corresponding seat occupation bits in that row shall be set to `0`.
 * 
 * @category: Vehicle information
 * @revision: V1.3.1
 *
PositionOfOccupants ::= BIT STRING {
    row1LeftOccupied  (0),
    row1RightOccupied (1),
    row1MidOccupied   (2),
    row1NotDetectable (3),
    row1NotPresent    (4),
    row2LeftOccupied  (5),
    row2RightOccupied (6),
    row2MidOccupied   (7),
    row2NotDetectable (8),
    row2NotPresent    (9),
    row3LeftOccupied  (10),
    row3RightOccupied (11),
    row3MidOccupied   (12),
    row3NotDetectable (13),
    row3NotPresent    (14),
    row4LeftOccupied  (15),
    row4RightOccupied (16),
    row4MidOccupied   (17),
    row4NotDetectable (18),
    row4NotPresent    (19)
} (SIZE(20))
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_ts_coding/denm_ts_PositionOfOccupants.h>
#include <etsi_its_denm_ts_coding/BIT_STRING.h>
#include <etsi_its_primitives_conversion/convertBIT_STRING.h>
#ifdef ROS1
#include <etsi_its_denm_ts_msgs/PositionOfOccupants.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/position_of_occupants.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_PositionOfOccupants(const denm_ts_PositionOfOccupants_t& in, denm_ts_msgs::PositionOfOccupants& out) {
  etsi_its_primitives_conversion::toRos_BIT_STRING(in, out.value);
  out.bits_unused = in.bits_unused;
}

void toStruct_PositionOfOccupants(const denm_ts_msgs::PositionOfOccupants& in, denm_ts_PositionOfOccupants_t& out) {
  memset(&out, 0, sizeof(denm_ts_PositionOfOccupants_t));
  etsi_its_primitives_conversion::toStruct_BIT_STRING(in.value, out);
  out.bits_unused = in.bits_unused;
}

}
