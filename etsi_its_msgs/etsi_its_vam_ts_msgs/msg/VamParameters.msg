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
#   asn1/raw/vam-ts103300_3/VAM-PDU-Descriptions.asn
#   asn1/patched/vam-ts103300_3/cdd/ETSI-ITS-CDD.asn
#   -t
#   vam_ts
#   -o
#   etsi_its_msgs/etsi_its_vam_ts_msgs/msg
# ------------------------------------------------------------------------------

# --- ASN.1 Definition ---------------------------------------------------------
# /**
#  * @details VamParameters
#  * The VAM payload includes the @ref BasicContainer and @ref VruHighFrequencyContainer. 
#  * The VAM payload may also include additional containers: @ref VruLowFrequencyContainer,
#  * @ref VruClusterInformationContainer, @ref VruClusterOperationContainer and @ref VruMotionPredictionContainer.
#  * The selection of the additional containers depends on the dissemination criteria, 
#  * e.g. _vruCluster_ or _MotionDynamicPrediction_ availability.
#  * 
#  * @category: Communication information
#  * @revision: V2.2.1
# **/
#     VamParameters ::= SEQUENCE {
#         basicContainer                 BasicContainer,
#         vruHighFrequencyContainer      VruHighFrequencyContainer, 
#         vruLowFrequencyContainer       VruLowFrequencyContainer OPTIONAL,
#         vruClusterInformationContainer VruClusterInformationContainer OPTIONAL,
#         vruClusterOperationContainer   VruClusterOperationContainer OPTIONAL,
#         vruMotionPredictionContainer   VruMotionPredictionContainer OPTIONAL,
#         ...
#     }
# ------------------------------------------------------------------------------

BasicContainer basic_container

VruHighFrequencyContainer vru_high_frequency_container

VruLowFrequencyContainer vru_low_frequency_container
bool vru_low_frequency_container_is_present

VruClusterInformationContainer vru_cluster_information_container
bool vru_cluster_information_container_is_present

VruClusterOperationContainer vru_cluster_operation_container
bool vru_cluster_operation_container_is_present

VruMotionPredictionContainer vru_motion_prediction_container
bool vru_motion_prediction_container_is_present

