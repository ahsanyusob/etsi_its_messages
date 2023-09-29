#pragma once

#include <etsi_its_cam_coding/SpecialTransportType.h>
#include <etsi_its_cam_conversion/primitives/convertBIT_STRING.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/SpecialTransportType.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/special_transport_type.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_SpecialTransportType(const SpecialTransportType_t& in, cam_msgs::SpecialTransportType& out) {

  toRos_BIT_STRING(in, out.value);
  out.bits_unused = in.bits_unused;
}

void toStruct_SpecialTransportType(const cam_msgs::SpecialTransportType& in, SpecialTransportType_t& out) {

  memset(&out, 0, sizeof(SpecialTransportType_t));
  toStruct_BIT_STRING(in.value, out);
  out.bits_unused = in.bits_unused;
}

}