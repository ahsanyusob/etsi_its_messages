/** ============================================================================
MIT License

Copyright (c) 2023-2025 Institute for Automotive Engineering (ika), RWTH Aachen University

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
 * This DF provides information about the breakup of a cluster.
 *
 * It shall include the following components: 
 * 
 * @field clusterBreakupReason: indicates the reason for breakup.
 * 
 * @field breakupTime: indicates the time of breakup. 
 *
 * @category: Cluster Information
 * @revision: Created in V2.1.1
 *
ClusterBreakupInfo ::= SEQUENCE {
    clusterBreakupReason    ClusterBreakupReason,
    breakupTime             DeltaTimeQuarterSecond,
    ...
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_vam_ts_coding/vam_ts_ClusterBreakupInfo.h>
#include <etsi_its_vam_ts_conversion/convertClusterBreakupReason.h>
#include <etsi_its_vam_ts_conversion/convertDeltaTimeQuarterSecond.h>
#ifdef ROS1
#include <etsi_its_vam_ts_msgs/ClusterBreakupInfo.h>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs;
#else
#include <etsi_its_vam_ts_msgs/msg/cluster_breakup_info.hpp>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs::msg;
#endif


namespace etsi_its_vam_ts_conversion {

void toRos_ClusterBreakupInfo(const vam_ts_ClusterBreakupInfo_t& in, vam_ts_msgs::ClusterBreakupInfo& out) {
  toRos_ClusterBreakupReason(in.clusterBreakupReason, out.cluster_breakup_reason);
  toRos_DeltaTimeQuarterSecond(in.breakupTime, out.breakup_time);
}

void toStruct_ClusterBreakupInfo(const vam_ts_msgs::ClusterBreakupInfo& in, vam_ts_ClusterBreakupInfo_t& out) {
  memset(&out, 0, sizeof(vam_ts_ClusterBreakupInfo_t));
  toStruct_ClusterBreakupReason(in.cluster_breakup_reason, out.clusterBreakupReason);
  toStruct_DeltaTimeQuarterSecond(in.breakup_time, out.breakupTime);
}

}
