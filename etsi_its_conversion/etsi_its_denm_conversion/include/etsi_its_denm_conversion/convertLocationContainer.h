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
  asn1/raw/denm_en302637_3/DENM-PDU-Descriptions.asn \
  asn1/raw/denm_en302637_3/cdd/ITS-Container.asn \
  -t \
  denm \
  -o \
  etsi_its_conversion/etsi_its_denm_conversion/include/etsi_its_denm_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
LocationContainer ::= SEQUENCE {
	eventSpeed Speed OPTIONAL,
	eventPositionHeading Heading OPTIONAL,
	traces Traces,
	roadType RoadType OPTIONAL,
	...
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_coding/denm_LocationContainer.h>
#include <etsi_its_denm_conversion/convertHeading.h>
#include <etsi_its_denm_conversion/convertRoadType.h>
#include <etsi_its_denm_conversion/convertSpeed.h>
#include <etsi_its_denm_conversion/convertTraces.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/LocationContainer.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/location_container.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_LocationContainer(const denm_LocationContainer_t& in, denm_msgs::LocationContainer& out) {
  if (in.eventSpeed) {
    toRos_Speed(*in.eventSpeed, out.event_speed);
    out.event_speed_is_present = true;
  }
  if (in.eventPositionHeading) {
    toRos_Heading(*in.eventPositionHeading, out.event_position_heading);
    out.event_position_heading_is_present = true;
  }
  toRos_Traces(in.traces, out.traces);
  if (in.roadType) {
    toRos_RoadType(*in.roadType, out.road_type);
    out.road_type_is_present = true;
  }
}

void toStruct_LocationContainer(const denm_msgs::LocationContainer& in, denm_LocationContainer_t& out) {
  memset(&out, 0, sizeof(denm_LocationContainer_t));
  if (in.event_speed_is_present) {
    out.eventSpeed = (denm_Speed_t*) calloc(1, sizeof(denm_Speed_t));
    toStruct_Speed(in.event_speed, *out.eventSpeed);
  }
  if (in.event_position_heading_is_present) {
    out.eventPositionHeading = (denm_Heading_t*) calloc(1, sizeof(denm_Heading_t));
    toStruct_Heading(in.event_position_heading, *out.eventPositionHeading);
  }
  toStruct_Traces(in.traces, out.traces);
  if (in.road_type_is_present) {
    out.roadType = (denm_RoadType_t*) calloc(1, sizeof(denm_RoadType_t));
    toStruct_RoadType(in.road_type, *out.roadType);
  }
}

}
