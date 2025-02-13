/** ============================================================================
MIT License

Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University

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
 * This DE indicates the components of an @ref PerceivedObject that are included in the @ref LowerTriangularPositiveSemidefiniteMatrix.
 *
 * The corresponding bit shall be set to 1 if the component is included:
 * - 0 - `xCoordinate`                   - when the component xCoordinate of the component @ref CartesianPosition3dWithConfidence is included,
 * - 1 - `yCoordinate`                   - when the component yCoordinate of the component @ref CartesianPosition3dWithConfidence is included,   
 * - 2 - `zCoordinate`                   - when the component zCoordinate of the component @ref CartesianPosition3dWithConfidence is included, 
 * - 3 - `xVelocityOrVelocityMagnitude`  - when the component xVelocity of the component @ref VelocityCartesian or the component VelocityMagnitude of the component @ref VelocityPolarWithZ is included,   
 * - 4 - `yVelocityOrVelocityDirection`  - when the component yVelocity of the component @ref VelocityCartesian or the component VelocityDirection of the component @ref VelocityPolarWithZ is included,   
 * - 5 - `zVelocity`                     - when the component zVelocity of the component @ref VelocityCartesian or of the component @ref VelocityPolarWithZ is included,
 * - 6 - `xAccelOrAccelMagnitude`        - when the component xAcceleration of the component @ref AccelerationCartesian or the component AccelerationMagnitude of the component @ref AccelerationPolarWithZ is included,  
 * - 7 - `yAccelOrAccelDirection`        - when the component yAcceleration of the component @ref AccelerationCartesian or the component AccelerationDirection of the component @ref AccelerationPolarWithZ is included,   
 * - 8 - `zAcceleration`                 - when the component zAcceleration of the component @ref AccelerationCartesian or of the component @ref AccelerationPolarWithZ is included,
 * - 9 - `zAngle`                        - when the component zAngle is included,
 * - 10 - `yAngle`                       - when the component yAngle is included,   
 * - 11 - `xAngle`                       - when the component xAngle is included,   
 * - 12 - `zAngularVelocity`             - when the component zAngularVelocity is included.   
 *
 * Otherwise, it shall be set to 0.
 *
 * @category: Sensing information
 * @revision: Created in V2.1.1
 *
MatrixIncludedComponents::= BIT STRING{
    xPosition                    (0),
    yPosition                    (1),
    zPosition                    (2),
    xVelocityOrVelocityMagnitude (3),
    yVelocityOrVelocityDirection (4),
    zSpeed                       (5),
    xAccelOrAccelMagnitude       (6),
    yAccelOrAccelDirection       (7),
    zAcceleration                (8),
    zAngle                       (9),  
    yAngle                      (10), 
    xAngle                      (11), 
    zAngularVelocity              (12)
} (SIZE(13,...))
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_ts_coding/denm_ts_MatrixIncludedComponents.h>
#include <etsi_its_denm_ts_coding/BIT_STRING.h>
#include <etsi_its_primitives_conversion/convertBIT_STRING.h>
#ifdef ROS1
#include <etsi_its_denm_ts_msgs/MatrixIncludedComponents.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/matrix_included_components.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_MatrixIncludedComponents(const denm_ts_MatrixIncludedComponents_t& in, denm_ts_msgs::MatrixIncludedComponents& out) {
  etsi_its_primitives_conversion::toRos_BIT_STRING(in, out.value);
  out.bits_unused = in.bits_unused;
}

void toStruct_MatrixIncludedComponents(const denm_ts_msgs::MatrixIncludedComponents& in, denm_ts_MatrixIncludedComponents_t& out) {
  memset(&out, 0, sizeof(denm_ts_MatrixIncludedComponents_t));
  etsi_its_primitives_conversion::toStruct_BIT_STRING(in.value, out);
  out.bits_unused = in.bits_unused;
}

}
