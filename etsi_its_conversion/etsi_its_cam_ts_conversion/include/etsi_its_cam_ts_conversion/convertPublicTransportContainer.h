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
  asn1/raw/cam_ts103900/CAM-PDU-Descriptions.asn \
  asn1/patched/cam_ts103900/cdd/ETSI-ITS-CDD.asn \
  -t \
  cam_ts \
  -o \
  etsi_its_conversion/etsi_its_cam_ts_conversion/include/etsi_its_cam_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
* This type contains detaild information of the Public Transport Container.
*
* It shall include the following components:
*
* @field embarkationStatus: It indicates whether the passenger embarkation is currently ongoing. 
*
* @field ptActivation: an optional component used for controlling traffic lights, barriers, bollards, etc.
*
PublicTransportContainer ::= SEQUENCE {
	embarkationStatus EmbarkationStatus,
	ptActivation PtActivation OPTIONAL
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_PublicTransportContainer.h>
#include <etsi_its_cam_ts_conversion/convertEmbarkationStatus.h>
#include <etsi_its_cam_ts_conversion/convertPtActivation.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/PublicTransportContainer.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/public_transport_container.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_PublicTransportContainer(const cam_ts_PublicTransportContainer_t& in, cam_ts_msgs::PublicTransportContainer& out) {
  toRos_EmbarkationStatus(in.embarkationStatus, out.embarkation_status);
  if (in.ptActivation) {
    toRos_PtActivation(*in.ptActivation, out.pt_activation);
    out.pt_activation_is_present = true;
  }
}

void toStruct_PublicTransportContainer(const cam_ts_msgs::PublicTransportContainer& in, cam_ts_PublicTransportContainer_t& out) {
  memset(&out, 0, sizeof(cam_ts_PublicTransportContainer_t));
  toStruct_EmbarkationStatus(in.embarkation_status, out.embarkationStatus);
  if (in.pt_activation_is_present) {
    out.ptActivation = (cam_ts_PtActivation_t*) calloc(1, sizeof(cam_ts_PtActivation_t));
    toStruct_PtActivation(in.pt_activation, *out.ptActivation);
  }
}

}
