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
AlacarteContainer ::= SEQUENCE {
	lanePosition LanePosition OPTIONAL,
	impactReduction ImpactReductionContainer OPTIONAL,
	externalTemperature Temperature OPTIONAL,
	roadWorks RoadWorksContainerExtended OPTIONAL,
	positioningSolution PositioningSolutionType OPTIONAL,
	stationaryVehicle StationaryVehicleContainer OPTIONAL,
	...
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_coding/denm_AlacarteContainer.h>
#include <etsi_its_denm_conversion/convertImpactReductionContainer.h>
#include <etsi_its_denm_conversion/convertLanePosition.h>
#include <etsi_its_denm_conversion/convertPositioningSolutionType.h>
#include <etsi_its_denm_conversion/convertRoadWorksContainerExtended.h>
#include <etsi_its_denm_conversion/convertStationaryVehicleContainer.h>
#include <etsi_its_denm_conversion/convertTemperature.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/AlacarteContainer.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/alacarte_container.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_AlacarteContainer(const denm_AlacarteContainer_t& in, denm_msgs::AlacarteContainer& out) {
  if (in.lanePosition) {
    toRos_LanePosition(*in.lanePosition, out.lane_position);
    out.lane_position_is_present = true;
  }
  if (in.impactReduction) {
    toRos_ImpactReductionContainer(*in.impactReduction, out.impact_reduction);
    out.impact_reduction_is_present = true;
  }
  if (in.externalTemperature) {
    toRos_Temperature(*in.externalTemperature, out.external_temperature);
    out.external_temperature_is_present = true;
  }
  if (in.roadWorks) {
    toRos_RoadWorksContainerExtended(*in.roadWorks, out.road_works);
    out.road_works_is_present = true;
  }
  if (in.positioningSolution) {
    toRos_PositioningSolutionType(*in.positioningSolution, out.positioning_solution);
    out.positioning_solution_is_present = true;
  }
  if (in.stationaryVehicle) {
    toRos_StationaryVehicleContainer(*in.stationaryVehicle, out.stationary_vehicle);
    out.stationary_vehicle_is_present = true;
  }
}

void toStruct_AlacarteContainer(const denm_msgs::AlacarteContainer& in, denm_AlacarteContainer_t& out) {
  memset(&out, 0, sizeof(denm_AlacarteContainer_t));
  if (in.lane_position_is_present) {
    out.lanePosition = (denm_LanePosition_t*) calloc(1, sizeof(denm_LanePosition_t));
    toStruct_LanePosition(in.lane_position, *out.lanePosition);
  }
  if (in.impact_reduction_is_present) {
    out.impactReduction = (denm_ImpactReductionContainer_t*) calloc(1, sizeof(denm_ImpactReductionContainer_t));
    toStruct_ImpactReductionContainer(in.impact_reduction, *out.impactReduction);
  }
  if (in.external_temperature_is_present) {
    out.externalTemperature = (denm_Temperature_t*) calloc(1, sizeof(denm_Temperature_t));
    toStruct_Temperature(in.external_temperature, *out.externalTemperature);
  }
  if (in.road_works_is_present) {
    out.roadWorks = (denm_RoadWorksContainerExtended_t*) calloc(1, sizeof(denm_RoadWorksContainerExtended_t));
    toStruct_RoadWorksContainerExtended(in.road_works, *out.roadWorks);
  }
  if (in.positioning_solution_is_present) {
    out.positioningSolution = (denm_PositioningSolutionType_t*) calloc(1, sizeof(denm_PositioningSolutionType_t));
    toStruct_PositioningSolutionType(in.positioning_solution, *out.positioningSolution);
  }
  if (in.stationary_vehicle_is_present) {
    out.stationaryVehicle = (denm_StationaryVehicleContainer_t*) calloc(1, sizeof(denm_StationaryVehicleContainer_t));
    toStruct_StationaryVehicleContainer(in.stationary_vehicle, *out.stationaryVehicle);
  }
}

}
