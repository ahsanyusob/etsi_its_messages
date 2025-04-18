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
  asn1/raw/denm_ts103831/DENM-PDU-Descriptions.asn \
  asn1/patched/denm_ts103831/cdd/ETSI-ITS-CDD.asn \
  -t \
  denm_ts \
  -o \
  etsi_its_conversion/etsi_its_denm_ts_conversion/include/etsi_its_denm_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
* 
 * This DF represents a  position in a two- or three-dimensional cartesian coordinate system with an associated confidence level for each coordinate.
 *
 * It shall include the following components: 
 *
 * @field xCoordinate: the X coordinate value with the associated confidence level.
 *
 * @field yCoordinate: the Y coordinate value with the associated confidence level.
 *
 * @field zCoordinate: the optional Z coordinate value with the associated confidence level.
 * 
 * @category: GeoReference information
 * @revision: Created in V2.1.1
*
CartesianPosition3dWithConfidence::= SEQUENCE{    
    xCoordinate    CartesianCoordinateWithConfidence, 
    yCoordinate    CartesianCoordinateWithConfidence, 
    zCoordinate    CartesianCoordinateWithConfidence OPTIONAL
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_ts_coding/denm_ts_CartesianPosition3dWithConfidence.h>
#include <etsi_its_denm_ts_conversion/convertCartesianCoordinateWithConfidence.h>
#ifdef ROS1
#include <etsi_its_denm_ts_msgs/CartesianPosition3dWithConfidence.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/cartesian_position3d_with_confidence.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_CartesianPosition3dWithConfidence(const denm_ts_CartesianPosition3dWithConfidence_t& in, denm_ts_msgs::CartesianPosition3dWithConfidence& out) {
  toRos_CartesianCoordinateWithConfidence(in.xCoordinate, out.x_coordinate);
  toRos_CartesianCoordinateWithConfidence(in.yCoordinate, out.y_coordinate);
  if (in.zCoordinate) {
    toRos_CartesianCoordinateWithConfidence(*in.zCoordinate, out.z_coordinate);
    out.z_coordinate_is_present = true;
  }
}

void toStruct_CartesianPosition3dWithConfidence(const denm_ts_msgs::CartesianPosition3dWithConfidence& in, denm_ts_CartesianPosition3dWithConfidence_t& out) {
  memset(&out, 0, sizeof(denm_ts_CartesianPosition3dWithConfidence_t));
  toStruct_CartesianCoordinateWithConfidence(in.x_coordinate, out.xCoordinate);
  toStruct_CartesianCoordinateWithConfidence(in.y_coordinate, out.yCoordinate);
  if (in.z_coordinate_is_present) {
    out.zCoordinate = (denm_ts_CartesianCoordinateWithConfidence_t*) calloc(1, sizeof(denm_ts_CartesianCoordinateWithConfidence_t));
    toStruct_CartesianCoordinateWithConfidence(in.z_coordinate, *out.zCoordinate);
  }
}

}
