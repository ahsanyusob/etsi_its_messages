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
#   asn1/raw/cam_ts103900/CAM-PDU-Descriptions.asn
#   asn1/patched/cam_ts103900/cdd/ETSI-ITS-CDD.asn
#   -t
#   cam_ts
#   -o
#   etsi_its_msgs/etsi_its_cam_ts_msgs/msg
# ------------------------------------------------------------------------------

# --- ASN.1 Definition ---------------------------------------------------------
# /**
#  * This DE represents the sub cause codes of the @ref CauseCode `collisionRisk`.
#  * 
#  * The value shall be set to:
#  * - 0 - `unavailable`                    - in case information on the type of collision risk is unavailable,
#  * - 1 - `longitudinalCollisionRisk`      - in case the type of detected collision risk is longitudinal collision risk, 
#  *                                          e.g. forward collision or face to face collision,
#  * - 2 - `crossingCollisionRisk`          - in case the type of detected collision risk is crossing collision risk,
#  * - 3 - `lateralCollisionRisk`           - in case the type of detected collision risk is lateral collision risk,
#  * - 4 - `vulnerableRoadUser`             - in case the type of detected collision risk involves vulnerable road users
#  *                                          e.g. pedestrians or bicycles.
#  * - 5 - `collisionRiskWithPedestrian`    - in case the type of detected collision risk involves at least one pedestrian, 
#  * - 6 - `collisionRiskWithCyclist`       - in case the type of detected collision risk involves at least one cyclist (and no pedestrians),
#  * - 7 - `collisionRiskWithMotorVehicle`  - in case the type of detected collision risk involves at least one motor vehicle (and no pedestrians or cyclists),
#  * - 8-255                                - are reserved for future usage.
#  *
#  * @category: Traffic information
#  * @revision: V1.3.1, values 5-7 assigned in V2.2.1
#  */
# CollisionRiskSubCauseCode ::= INTEGER {
#     unavailable                   (0), 
#     longitudinalCollisionRisk     (1), 
#     crossingCollisionRisk         (2), 
#     lateralCollisionRisk          (3), 
#     vulnerableRoadUser            (4),
#     collisionRiskWithPedestrian   (5), 
#     collisionRiskWithCyclist      (6), 
#     collisionRiskWithMotorVehicle (7) 
# }(0..255)
# ------------------------------------------------------------------------------

uint8 value
uint8 MIN = 0
uint8 MAX = 255
uint8 UNAVAILABLE = 0
uint8 LONGITUDINAL_COLLISION_RISK = 1
uint8 CROSSING_COLLISION_RISK = 2
uint8 LATERAL_COLLISION_RISK = 3
uint8 VULNERABLE_ROAD_USER = 4
uint8 COLLISION_RISK_WITH_PEDESTRIAN = 5
uint8 COLLISION_RISK_WITH_CYCLIST = 6
uint8 COLLISION_RISK_WITH_MOTOR_VEHICLE = 7

