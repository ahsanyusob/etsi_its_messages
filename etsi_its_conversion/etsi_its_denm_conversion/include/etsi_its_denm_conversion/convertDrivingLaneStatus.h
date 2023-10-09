#pragma once

#include <etsi_its_denm_coding/DrivingLaneStatus.h>
#include <etsi_its_denm_conversion/primitives/convertBIT_STRING.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/DrivingLaneStatus.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/driving_lane_status.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_DrivingLaneStatus(const DrivingLaneStatus_t& in, denm_msgs::DrivingLaneStatus& out) {

  toRos_BIT_STRING(in, out.value);
  out.bits_unused = in.bits_unused;
}

void toStruct_DrivingLaneStatus(const denm_msgs::DrivingLaneStatus& in, DrivingLaneStatus_t& out) {

  memset(&out, 0, sizeof(DrivingLaneStatus_t));
  toStruct_BIT_STRING(in.value, out);
  out.bits_unused = in.bits_unused;
}

}