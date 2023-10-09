#pragma once

#include <etsi_its_denm_coding/WheelBaseVehicle.h>
#include <etsi_its_denm_conversion/primitives/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/WheelBaseVehicle.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/wheel_base_vehicle.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_WheelBaseVehicle(const WheelBaseVehicle_t& in, denm_msgs::WheelBaseVehicle& out) {

  toRos_INTEGER(in, out.value);
}

void toStruct_WheelBaseVehicle(const denm_msgs::WheelBaseVehicle& in, WheelBaseVehicle_t& out) {

  memset(&out, 0, sizeof(WheelBaseVehicle_t));
  toStruct_INTEGER(in.value, out);
}

}