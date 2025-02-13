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
 * This DE indicates an ordinal number that represents the position of a component in the list of @ref Traces or @ref TracesExtended. 
 *
 * The value shall be set to:
 * - `0` - noPath  - if no path is identified
 * - `1..7`        - for instances 1..7 of @ref Traces 
 * - `8..14`       - for instances 1..7 of @ref TracesExtended. 
 *
 * @category: Road topology information
 * @revision: Created in V2.2.1
*
PathId ::= INTEGER {
    noPath        (0),
    path1         (1),
    path2         (2),
    path3         (3),
    path4         (4),
    path5         (5),
    path6         (6),
    path7         (7),
    pathExtended1 (8),
    pathExtended2 (9),
    pathExtended3 (10),
    pathExtended4 (11),
    pathExtended5 (12),
    pathExtended6 (13),
    pathExtended7 (14)
} (0..14)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_ts_coding/denm_ts_PathId.h>
#include <etsi_its_denm_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_denm_ts_msgs/PathId.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/path_id.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_PathId(const denm_ts_PathId_t& in, denm_ts_msgs::PathId& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_PathId(const denm_ts_msgs::PathId& in, denm_ts_PathId_t& out) {
  memset(&out, 0, sizeof(denm_ts_PathId_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
