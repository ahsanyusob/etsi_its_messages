# ==============================================================================
# MIT License
#
# Copyright (c) 2023-2025 Institute for Automotive Engineering (ika), RWTH Aachen University
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
# ==============================================================================

# --- Auto-generated by https://github.com/ika-rwth-aachen/etsi_its_messages ---
# python3
#   utils/codegen/codegen-py/asn1ToRosMsg.py
#   asn1/raw/denm_ts103831/DENM-PDU-Descriptions.asn
#   asn1/patched/denm_ts103831/cdd/ETSI-ITS-CDD.asn
#   -t
#   denm_ts
#   -o
#   etsi_its_msgs/etsi_its_denm_ts_msgs/msg
# ------------------------------------------------------------------------------

# --- ASN.1 Definition ---------------------------------------------------------
# /** 
#  * This type represents the A La Carte Container.
#  *
#  * It shall include the following components: 
#  *
#  * @field lanePosition: the optional lane position of the event.
#  *
#  * @field impactReduction: optional vehicle data for collision mitigation.
#  *
#  * @field externalTemperature: optional the ambient temperature at the event position.
#  *
#  * @field roadWorks: optional information of the roadwork zone.
#  *
#  * @field positioningSolution: optionally indicates the technical solution being used by the originating ITS-S to estimate the event position.
#  *
#  * @field stationaryVehicle: optional information about a stationary vehicle.
#  *
#  * @field roadConfiguration: optional information about the configuration of the road.
#  *
#  * @field precrash: the optional information about perceived objects that represent hazards and/or could be subject of collisions. 
#  *
# */
# AlacarteContainer ::= SEQUENCE {
#     lanePosition        LanePosition OPTIONAL,
#     impactReduction     ImpactReductionContainer OPTIONAL,
#     externalTemperature Temperature OPTIONAL,
#     roadWorks           RoadWorksContainerExtended OPTIONAL,
#     positioningSolution PositioningSolutionType OPTIONAL,
#     stationaryVehicle   StationaryVehicleContainer OPTIONAL,
#     ...,
# [[  roadConfiguration 	RoadConfigurationContainer OPTIONAL,
#     preCrash            PreCrashContainer OPTIONAL ]]
# }
# ------------------------------------------------------------------------------

LanePosition lane_position
bool lane_position_is_present

ImpactReductionContainer impact_reduction
bool impact_reduction_is_present

Temperature external_temperature
bool external_temperature_is_present

RoadWorksContainerExtended road_works
bool road_works_is_present

PositioningSolutionType positioning_solution
bool positioning_solution_is_present

StationaryVehicleContainer stationary_vehicle
bool stationary_vehicle_is_present

RoadConfigurationContainer road_configuration
bool road_configuration_is_present

PreCrashContainer pre_crash
bool pre_crash_is_present

