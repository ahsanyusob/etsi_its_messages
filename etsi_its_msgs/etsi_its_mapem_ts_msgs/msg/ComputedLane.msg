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
#   asn1/raw/is_ts103301/MAPEM-PDU-Descriptions.asn
#   asn1/raw/is_ts103301/cdd/ITS-Container.asn
#   asn1/raw/is_ts103301/iso-patched/ISO24534-3_ElectronicRegistrationIdentificationVehicleDataModule-patched.asn
#   asn1/raw/is_ts103301/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn
#   asn1/patched/is_ts103301/build/asn1/ISO14816_AVIAEINumberingAndDataStructures.asn
#   -t
#   mapem_ts
#   -o
#   etsi_its_msgs/etsi_its_mapem_ts_msgs/msg
# ------------------------------------------------------------------------------

# --- ASN.1 Definition ---------------------------------------------------------
# ComputedLane ::= SEQUENCE {
#   referenceLaneId    LaneID,
#   offsetXaxis        CHOICE {
#                         small   DrivenLineOffsetSm, 
#                         large   DrivenLineOffsetLg
#                         },  
#   offsetYaxis        CHOICE {
#                         small   DrivenLineOffsetSm, 
#                         large   DrivenLineOffsetLg
#                         },  
#   rotateXY           Angle OPTIONAL, 
#   scaleXaxis         Scale-B12 OPTIONAL, 
#   scaleYaxis         Scale-B12 OPTIONAL, 
#   regional  SEQUENCE (SIZE(1..4)) OF 
#             RegionalExtension {{Reg-ComputedLane}} OPTIONAL,
# ------------------------------------------------------------------------------

LaneID reference_lane_id

uint8 offset_xaxis_choice

DrivenLineOffsetSm offset_xaxis_small
uint8 CHOICE_OFFSET_XAXIS_SMALL = 0

DrivenLineOffsetLg offset_xaxis_large
uint8 CHOICE_OFFSET_XAXIS_LARGE = 1

uint8 offset_yaxis_choice

DrivenLineOffsetSm offset_yaxis_small
uint8 CHOICE_OFFSET_YAXIS_SMALL = 0

DrivenLineOffsetLg offset_yaxis_large
uint8 CHOICE_OFFSET_YAXIS_LARGE = 1

Angle rotate_xy
bool rotate_xy_is_present

ScaleB12 scale_xaxis
bool scale_xaxis_is_present

ScaleB12 scale_yaxis
bool scale_yaxis_is_present

