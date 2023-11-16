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

#include <etsi_its_mapem_coding/RequestorDescription-addGrpC.h>
#include <etsi_its_mapem_conversion/convertFuelType.h>
#include <etsi_its_mapem_conversion/convertBatteryStatus.h>
#ifdef ROS1
#include <etsi_its_mapem_msgs/RequestorDescription-addGrpC.h>
namespace mapem_msgs = etsi_its_mapem_msgs;
#else
#include <etsi_its_mapem_msgs/msg/requestor_description_add_grp_c.hpp>
namespace mapem_msgs = etsi_its_mapem_msgs::msg;
#endif


namespace etsi_its_mapem_conversion {

void toRos_RequestorDescription-addGrpC(const RequestorDescription-addGrpC_t& in, mapem_msgs::RequestorDescription-addGrpC& out) {

  if (in.fuel) {
    toRos_FuelType(*in.fuel, out.fuel);
    out.fuel_is_present = true;
  }

  if (in.batteryStatus) {
    toRos_BatteryStatus(*in.batteryStatus, out.battery_status);
    out.battery_status_is_present = true;
  }

}

void toStruct_RequestorDescription-addGrpC(const mapem_msgs::RequestorDescription-addGrpC& in, RequestorDescription-addGrpC_t& out) {

  memset(&out, 0, sizeof(RequestorDescription-addGrpC_t));

  if (in.fuel_is_present) {
    FuelType_t fuel;
    toStruct_FuelType(in.fuel, fuel);
    out.fuel = new FuelType_t(fuel);
  }

  if (in.battery_status_is_present) {
    BatteryStatus_t battery_status;
    toStruct_BatteryStatus(in.battery_status, battery_status);
    out.batteryStatus = new BatteryStatus_t(battery_status);
  }

}

}