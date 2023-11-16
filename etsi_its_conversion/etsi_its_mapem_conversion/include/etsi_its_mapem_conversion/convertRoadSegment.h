/** ============================================================================
MIT License

Copyright (c) 2023 Institute for Automotive Engineering (ika), RWTH Aachen University

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

// --- Auto-generated by asn1ToConversionHeader.py -----------------------------

#pragma once

#include <etsi_its_mapem_coding/RoadSegment.h>
#include <etsi_its_mapem_conversion/convertDescriptiveName.h>
#include <etsi_its_mapem_conversion/convertRoadSegmentReferenceID.h>
#include <etsi_its_mapem_conversion/convertMsgCount.h>
#include <etsi_its_mapem_conversion/convertPosition3D.h>
#include <etsi_its_mapem_conversion/convertLaneWidth.h>
#include <etsi_its_mapem_conversion/convertSpeedLimitList.h>
#include <etsi_its_mapem_conversion/convertRoadLaneSetList.h>
#include <etsi_its_mapem_conversion/convertRegionalExtension.h>
#ifdef ROS1
#include <etsi_its_mapem_msgs/RoadSegment.h>
namespace mapem_msgs = etsi_its_mapem_msgs;
#else
#include <etsi_its_mapem_msgs/msg/road_segment.hpp>
namespace mapem_msgs = etsi_its_mapem_msgs::msg;
#endif


namespace etsi_its_mapem_conversion {

void toRos_RoadSegment(const RoadSegment_t& in, mapem_msgs::RoadSegment& out) {

  if (in.name) {
    toRos_DescriptiveName(*in.name, out.name);
    out.name_is_present = true;
  }

  toRos_RoadSegmentReferenceID(in.id, out.id);
  toRos_MsgCount(in.revision, out.revision);
  toRos_Position3D(in.refPoint, out.ref_point);
  if (in.laneWidth) {
    toRos_LaneWidth(*in.laneWidth, out.lane_width);
    out.lane_width_is_present = true;
  }

  if (in.speedLimits) {
    toRos_SpeedLimitList(*in.speedLimits, out.speed_limits);
    out.speed_limits_is_present = true;
  }

  toRos_RoadLaneSetList(in.roadLaneSet, out.road_lane_set);
  if (in.regional) {
    // TODO: toRos_RegionalExtension(*in.regional, out.regional);
    out.regional_is_present = true;
  }

}

void toStruct_RoadSegment(const mapem_msgs::RoadSegment& in, RoadSegment_t& out) {

  memset(&out, 0, sizeof(RoadSegment_t));

  if (in.name_is_present) {
    DescriptiveName_t name;
    toStruct_DescriptiveName(in.name, name);
    out.name = new DescriptiveName_t(name);
  }

  toStruct_RoadSegmentReferenceID(in.id, out.id);
  toStruct_MsgCount(in.revision, out.revision);
  toStruct_Position3D(in.ref_point, out.refPoint);
  if (in.lane_width_is_present) {
    LaneWidth_t lane_width;
    toStruct_LaneWidth(in.lane_width, lane_width);
    out.laneWidth = new LaneWidth_t(lane_width);
  }

  if (in.speed_limits_is_present) {
    SpeedLimitList_t speed_limits;
    toStruct_SpeedLimitList(in.speed_limits, speed_limits);
    out.speedLimits = new SpeedLimitList_t(speed_limits);
  }

  toStruct_RoadLaneSetList(in.road_lane_set, out.roadLaneSet);
  if (in.regional_is_present) {
    RegionalExtension_364P0_t regional;
    // TODO: toStruct_RegionalExtension(in.regional, regional);
    // TODO: out.regional = new RegionalExtension_364P0_t(regional);
  }

}

}