/** ============================================================================
MIT License

Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University
Copyright (c) 2024 Instituto de Telecomunicações, Universidade de Aveiro

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

#include <etsi_its_cpm_coding/cpm_AccelerationCartesian.h>
#include <etsi_its_cpm_conversion/convertAccelerationComponent.h>
#ifdef ROS1
#include <etsi_its_cpm_msgs/AccelerationCartesian.h>
namespace cpm_msgs = etsi_its_cpm_msgs;
#else
#include <etsi_its_cpm_msgs/msg/acceleration_cartesian.hpp>
namespace cpm_msgs = etsi_its_cpm_msgs::msg;
#endif


namespace etsi_its_cpm_conversion {

void toRos_AccelerationCartesian(const cpm_AccelerationCartesian_t& in, cpm_msgs::AccelerationCartesian& out) {
  toRos_AccelerationComponent(in.xAcceleration, out.x_acceleration);
  toRos_AccelerationComponent(in.yAcceleration, out.y_acceleration);
  if (in.zAcceleration) {
    toRos_AccelerationComponent(*in.zAcceleration, out.z_acceleration);
    out.z_acceleration_is_present = true;
  }
}

void toStruct_AccelerationCartesian(const cpm_msgs::AccelerationCartesian& in, cpm_AccelerationCartesian_t& out) {
  memset(&out, 0, sizeof(cpm_AccelerationCartesian_t));

  toStruct_AccelerationComponent(in.x_acceleration, out.xAcceleration);
  toStruct_AccelerationComponent(in.y_acceleration, out.yAcceleration);
  if (in.z_acceleration_is_present) {
    out.zAcceleration = (cpm_AccelerationComponent_t*) calloc(1, sizeof(cpm_AccelerationComponent_t));
    toStruct_AccelerationComponent(in.z_acceleration, *out.zAcceleration);
  }
}

}
