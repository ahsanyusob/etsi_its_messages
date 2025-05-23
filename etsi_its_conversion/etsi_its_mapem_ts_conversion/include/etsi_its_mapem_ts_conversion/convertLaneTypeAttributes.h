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
  asn1/raw/is_ts103301/MAPEM-PDU-Descriptions.asn \
  asn1/raw/is_ts103301/cdd/ITS-Container.asn \
  asn1/raw/is_ts103301/iso-patched/ISO24534-3_ElectronicRegistrationIdentificationVehicleDataModule-patched.asn \
  asn1/raw/is_ts103301/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn \
  asn1/patched/is_ts103301/build/asn1/ISO14816_AVIAEINumberingAndDataStructures.asn \
  -t \
  mapem_ts \
  -o \
  etsi_its_conversion/etsi_its_mapem_ts_conversion/include/etsi_its_mapem_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
LaneTypeAttributes ::= CHOICE {
  vehicle        LaneAttributes-Vehicle,
  crosswalk      LaneAttributes-Crosswalk,
  bikeLane       LaneAttributes-Bike,
  sidewalk       LaneAttributes-Sidewalk,
  median         LaneAttributes-Barrier,
  striping       LaneAttributes-Striping,
  trackedVehicle LaneAttributes-TrackedVehicle,
  parking        LaneAttributes-Parking,
  ...
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_mapem_ts_coding/mapem_ts_LaneTypeAttributes.h>
#include <etsi_its_mapem_ts_conversion/convertLaneAttributesBarrier.h>
#include <etsi_its_mapem_ts_conversion/convertLaneAttributesBike.h>
#include <etsi_its_mapem_ts_conversion/convertLaneAttributesCrosswalk.h>
#include <etsi_its_mapem_ts_conversion/convertLaneAttributesParking.h>
#include <etsi_its_mapem_ts_conversion/convertLaneAttributesSidewalk.h>
#include <etsi_its_mapem_ts_conversion/convertLaneAttributesStriping.h>
#include <etsi_its_mapem_ts_conversion/convertLaneAttributesTrackedVehicle.h>
#include <etsi_its_mapem_ts_conversion/convertLaneAttributesVehicle.h>
#ifdef ROS1
#include <etsi_its_mapem_ts_msgs/LaneTypeAttributes.h>
namespace mapem_ts_msgs = etsi_its_mapem_ts_msgs;
#else
#include <etsi_its_mapem_ts_msgs/msg/lane_type_attributes.hpp>
namespace mapem_ts_msgs = etsi_its_mapem_ts_msgs::msg;
#endif


namespace etsi_its_mapem_ts_conversion {

void toRos_LaneTypeAttributes(const mapem_ts_LaneTypeAttributes_t& in, mapem_ts_msgs::LaneTypeAttributes& out) {
  switch (in.present) {
  case mapem_ts_LaneTypeAttributes_PR_vehicle:
    toRos_LaneAttributesVehicle(in.choice.vehicle, out.vehicle);
    out.choice = mapem_ts_msgs::LaneTypeAttributes::CHOICE_VEHICLE;
    break;
  case mapem_ts_LaneTypeAttributes_PR_crosswalk:
    toRos_LaneAttributesCrosswalk(in.choice.crosswalk, out.crosswalk);
    out.choice = mapem_ts_msgs::LaneTypeAttributes::CHOICE_CROSSWALK;
    break;
  case mapem_ts_LaneTypeAttributes_PR_bikeLane:
    toRos_LaneAttributesBike(in.choice.bikeLane, out.bike_lane);
    out.choice = mapem_ts_msgs::LaneTypeAttributes::CHOICE_BIKE_LANE;
    break;
  case mapem_ts_LaneTypeAttributes_PR_sidewalk:
    toRos_LaneAttributesSidewalk(in.choice.sidewalk, out.sidewalk);
    out.choice = mapem_ts_msgs::LaneTypeAttributes::CHOICE_SIDEWALK;
    break;
  case mapem_ts_LaneTypeAttributes_PR_median:
    toRos_LaneAttributesBarrier(in.choice.median, out.median);
    out.choice = mapem_ts_msgs::LaneTypeAttributes::CHOICE_MEDIAN;
    break;
  case mapem_ts_LaneTypeAttributes_PR_striping:
    toRos_LaneAttributesStriping(in.choice.striping, out.striping);
    out.choice = mapem_ts_msgs::LaneTypeAttributes::CHOICE_STRIPING;
    break;
  case mapem_ts_LaneTypeAttributes_PR_trackedVehicle:
    toRos_LaneAttributesTrackedVehicle(in.choice.trackedVehicle, out.tracked_vehicle);
    out.choice = mapem_ts_msgs::LaneTypeAttributes::CHOICE_TRACKED_VEHICLE;
    break;
  case mapem_ts_LaneTypeAttributes_PR_parking:
    toRos_LaneAttributesParking(in.choice.parking, out.parking);
    out.choice = mapem_ts_msgs::LaneTypeAttributes::CHOICE_PARKING;
    break;
  default: break;
  }
}

void toStruct_LaneTypeAttributes(const mapem_ts_msgs::LaneTypeAttributes& in, mapem_ts_LaneTypeAttributes_t& out) {
  memset(&out, 0, sizeof(mapem_ts_LaneTypeAttributes_t));
  switch (in.choice) {
  case mapem_ts_msgs::LaneTypeAttributes::CHOICE_VEHICLE:
    toStruct_LaneAttributesVehicle(in.vehicle, out.choice.vehicle);
    out.present = mapem_ts_LaneTypeAttributes_PR::mapem_ts_LaneTypeAttributes_PR_vehicle;
    break;
  case mapem_ts_msgs::LaneTypeAttributes::CHOICE_CROSSWALK:
    toStruct_LaneAttributesCrosswalk(in.crosswalk, out.choice.crosswalk);
    out.present = mapem_ts_LaneTypeAttributes_PR::mapem_ts_LaneTypeAttributes_PR_crosswalk;
    break;
  case mapem_ts_msgs::LaneTypeAttributes::CHOICE_BIKE_LANE:
    toStruct_LaneAttributesBike(in.bike_lane, out.choice.bikeLane);
    out.present = mapem_ts_LaneTypeAttributes_PR::mapem_ts_LaneTypeAttributes_PR_bikeLane;
    break;
  case mapem_ts_msgs::LaneTypeAttributes::CHOICE_SIDEWALK:
    toStruct_LaneAttributesSidewalk(in.sidewalk, out.choice.sidewalk);
    out.present = mapem_ts_LaneTypeAttributes_PR::mapem_ts_LaneTypeAttributes_PR_sidewalk;
    break;
  case mapem_ts_msgs::LaneTypeAttributes::CHOICE_MEDIAN:
    toStruct_LaneAttributesBarrier(in.median, out.choice.median);
    out.present = mapem_ts_LaneTypeAttributes_PR::mapem_ts_LaneTypeAttributes_PR_median;
    break;
  case mapem_ts_msgs::LaneTypeAttributes::CHOICE_STRIPING:
    toStruct_LaneAttributesStriping(in.striping, out.choice.striping);
    out.present = mapem_ts_LaneTypeAttributes_PR::mapem_ts_LaneTypeAttributes_PR_striping;
    break;
  case mapem_ts_msgs::LaneTypeAttributes::CHOICE_TRACKED_VEHICLE:
    toStruct_LaneAttributesTrackedVehicle(in.tracked_vehicle, out.choice.trackedVehicle);
    out.present = mapem_ts_LaneTypeAttributes_PR::mapem_ts_LaneTypeAttributes_PR_trackedVehicle;
    break;
  case mapem_ts_msgs::LaneTypeAttributes::CHOICE_PARKING:
    toStruct_LaneAttributesParking(in.parking, out.choice.parking);
    out.present = mapem_ts_LaneTypeAttributes_PR::mapem_ts_LaneTypeAttributes_PR_parking;
    break;
  default: break;
  }
}

}
