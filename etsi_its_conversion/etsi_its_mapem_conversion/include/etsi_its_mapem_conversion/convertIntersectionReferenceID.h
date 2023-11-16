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

#include <etsi_its_mapem_coding/IntersectionReferenceID.h>
#include <etsi_its_mapem_conversion/convertRoadRegulatorID.h>
#include <etsi_its_mapem_conversion/convertIntersectionID.h>
#ifdef ROS1
#include <etsi_its_mapem_msgs/IntersectionReferenceID.h>
namespace mapem_msgs = etsi_its_mapem_msgs;
#else
#include <etsi_its_mapem_msgs/msg/intersection_reference_id.hpp>
namespace mapem_msgs = etsi_its_mapem_msgs::msg;
#endif


namespace etsi_its_mapem_conversion {

void toRos_IntersectionReferenceID(const IntersectionReferenceID_t& in, mapem_msgs::IntersectionReferenceID& out) {

  if (in.region) {
    toRos_RoadRegulatorID(*in.region, out.region);
    out.region_is_present = true;
  }

  toRos_IntersectionID(in.id, out.id);
}

void toStruct_IntersectionReferenceID(const mapem_msgs::IntersectionReferenceID& in, IntersectionReferenceID_t& out) {

  memset(&out, 0, sizeof(IntersectionReferenceID_t));

  if (in.region_is_present) {
    RoadRegulatorID_t region;
    toStruct_RoadRegulatorID(in.region, region);
    out.region = new RoadRegulatorID_t(region);
  }

  toStruct_IntersectionID(in.id, out.id);
}

}