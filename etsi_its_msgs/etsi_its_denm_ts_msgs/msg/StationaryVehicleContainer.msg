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
#  * This type contains detailed information about a stationary vehicle.
#  *
#  * It shall include the following components: 
#  *
#  * @field stationarySince: the optional time duration of the stationary vehicle being stationary.
#  *
#  * @field stationaryCause: optional additional information to describe causes of the stationary vehicle event such as human problem.
#  *
#  * @field carryingDangerousGoods: optional information on the type of dangerous goods, the required emergency action and other information.
#  *
#  * @field numberOfOccupants: the optional estimated number of occupants involved in the stationary vehicle event.
#  *
#  * @field vehicleIdentification: the optional identification of the stationary vehicle.
#  *
#  * @field energyStorageType: the optional vehicle energy storage type information of the stationary vehicle, such as electric, diesel, etc.
#  *
# */
# StationaryVehicleContainer ::= SEQUENCE {
#     stationarySince        StationarySince OPTIONAL, 
#     stationaryCause        CauseCodeV2 OPTIONAL,
#     carryingDangerousGoods DangerousGoodsExtended OPTIONAL,
#     numberOfOccupants      NumberOfOccupants OPTIONAL,
#     vehicleIdentification  VehicleIdentification OPTIONAL,
#     energyStorageType      EnergyStorageType OPTIONAL
# }
# ------------------------------------------------------------------------------

StationarySince stationary_since
bool stationary_since_is_present

CauseCodeV2 stationary_cause
bool stationary_cause_is_present

DangerousGoodsExtended carrying_dangerous_goods
bool carrying_dangerous_goods_is_present

NumberOfOccupants number_of_occupants
bool number_of_occupants_is_present

VehicleIdentification vehicle_identification
bool vehicle_identification_is_present

EnergyStorageType energy_storage_type
bool energy_storage_type_is_present

