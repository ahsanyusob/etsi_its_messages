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

#include <etsi_its_mapem_coding/ComputedLane.h>
#include <etsi_its_mapem_conversion/convertLaneID.h>
#include <etsi_its_mapem_conversion/convertuint8.h>
#include <etsi_its_mapem_conversion/convertDrivenLineOffsetSm.h>
#include <etsi_its_mapem_conversion/convertDrivenLineOffsetLg.h>
#include <etsi_its_mapem_conversion/convertuint8.h>
#include <etsi_its_mapem_conversion/convertDrivenLineOffsetSm.h>
#include <etsi_its_mapem_conversion/convertDrivenLineOffsetLg.h>
#include <etsi_its_mapem_conversion/convertAngle.h>
#include <etsi_its_mapem_conversion/convertScaleB12.h>
#include <etsi_its_mapem_conversion/convertScaleB12.h>
#include <etsi_its_mapem_conversion/convertRegionalExtension.h>
#ifdef ROS1
#include <etsi_its_mapem_msgs/ComputedLane.h>
namespace mapem_msgs = etsi_its_mapem_msgs;
#else
#include <etsi_its_mapem_msgs/msg/computed_lane.hpp>
namespace mapem_msgs = etsi_its_mapem_msgs::msg;
#endif


namespace etsi_its_mapem_conversion {

void toRos_ComputedLane(const ComputedLane_t& in, mapem_msgs::ComputedLane& out) {

  toRos_LaneID(in.referenceLaneId, out.reference_lane_id);
  toRos_uint8(in., out.offset_xaxis_choice);
  toRos_DrivenLineOffsetSm(in.offsetXaxis_small, out.offset_xaxis_small);
  toRos_DrivenLineOffsetLg(in.offsetXaxis_large, out.offset_xaxis_large);
  toRos_uint8(in., out.offset_yaxis_choice);
  toRos_DrivenLineOffsetSm(in.offsetYaxis_small, out.offset_yaxis_small);
  toRos_DrivenLineOffsetLg(in.offsetYaxis_large, out.offset_yaxis_large);
  if (in.rotateXY) {
    toRos_Angle(*in.rotateXY, out.rotate_x_y);
    out.rotate_x_y_is_present = true;
  }

  if (in.scaleXaxis) {
    toRos_ScaleB12(*in.scaleXaxis, out.scale_xaxis);
    out.scale_xaxis_is_present = true;
  }

  if (in.scaleYaxis) {
    toRos_ScaleB12(*in.scaleYaxis, out.scale_yaxis);
    out.scale_yaxis_is_present = true;
  }

  if (in.regional) {
    // TODO: toRos_RegionalExtension(*in.regional, out.regional);
    out.regional_is_present = true;
  }

}

void toStruct_ComputedLane(const mapem_msgs::ComputedLane& in, ComputedLane_t& out) {

  memset(&out, 0, sizeof(ComputedLane_t));

  toStruct_LaneID(in.reference_lane_id, out.referenceLaneId);
  toStruct_uint8(in.offset_xaxis_choice, out.);
  toStruct_DrivenLineOffsetSm(in.offset_xaxis_small, out.offsetXaxis_small);
  toStruct_DrivenLineOffsetLg(in.offset_xaxis_large, out.offsetXaxis_large);
  toStruct_uint8(in.offset_yaxis_choice, out.);
  toStruct_DrivenLineOffsetSm(in.offset_yaxis_small, out.offsetYaxis_small);
  toStruct_DrivenLineOffsetLg(in.offset_yaxis_large, out.offsetYaxis_large);
  if (in.rotate_x_y_is_present) {
    Angle_t rotate_x_y;
    toStruct_Angle(in.rotate_x_y, rotate_x_y);
    out.rotateXY = new Angle_t(rotate_x_y);
  }

  if (in.scale_xaxis_is_present) {
    ScaleB12_t scale_xaxis;
    toStruct_ScaleB12(in.scale_xaxis, scale_xaxis);
    out.scaleXaxis = new ScaleB12_t(scale_xaxis);
  }

  if (in.scale_yaxis_is_present) {
    ScaleB12_t scale_yaxis;
    toStruct_ScaleB12(in.scale_yaxis, scale_yaxis);
    out.scaleYaxis = new ScaleB12_t(scale_yaxis);
  }

  if (in.regional_is_present) {
    RegionalExtension_364P0_t regional;
    // TODO: toStruct_RegionalExtension(in.regional, regional);
    // TODO: out.regional = new RegionalExtension_364P0_t(regional);
  }

}

}