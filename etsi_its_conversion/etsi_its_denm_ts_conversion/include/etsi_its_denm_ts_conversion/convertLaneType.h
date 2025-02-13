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
 * This DE represents the type of a lane. 
 * 
 * The value shall be set to:
 * - 0	- `traffic`            - Lane dedicated to the movement of vehicles,
 * - 1	- `through`            - Lane dedicated to the movement of vehicles travelling ahead and not turning,
 * - 2	- `reversible`         - Lane where the direction of traffic can be changed to match the peak flow,
 * - 3	- `acceleration`	   - Lane that allows vehicles entering a road to accelerate to the speed of through traffic before merging with it,
 * - 4	- `deceleration`       - Lane that allows vehicles exiting a road to decelerate before leaving it,
 * - 5	- `leftHandTurning`    - Lane reserved for slowing down and making a left turn, so as not to disrupt traffic,
 * - 6	- `rightHandTurning`   - Lane reserved for slowing down and making a right turn so as not to disrupt traffic,
 * - 7	- `dedicatedVehicle`   - Lane dedicated to movement of motor vehicles with specific characteristics, such as heavy goods vehicles, etc., 
 * - 8	- `bus`                - Lane dedicated to movement of buses providing public transport,
 * - 9	- `taxi`               - Lane dedicated to movement of taxis,
 * - 10	- `hov`                - Carpooling lane or high occupancy vehicle lane,
 * - 11	- `hot`                - High occupancy vehicle lanes that is allowed to be used without meeting the occupancy criteria by paying a toll,
 * - 12	- `pedestrian`         - Lanes dedicated to pedestrians such as pedestrian sidewalk paths,
 * - 13	- `cycleLane`	       - Lane dedicated to exclusive or preferred use by bicycles,
 * - 14	- `median`             - Lane not dedicated to movement of vehicles but representing a median / central reservation  such as the central median, 
                                 separating the two directional carriageways of the highway,
 * - 15	- `striping`	       - Lane not dedicated to movement of vehicles but covered with roadway markings,
 * - 16	- `trackedVehicle`     - Lane dedicated to movement of trains, trams and trolleys,
 * - 17	- `parking`            - Lanes dedicated to vehicles parking, stopping and loading lanes,
 * - 18	- `emergency`          - Lane dedicated to vehicles in breakdown or to emergency vehicles also called hard shoulder,
 * - 19	- `verge`              - Lane representing the verge, i.e. a narrow strip of grass or plants and sometimes also trees located between 
                                 the road surface edge and the boundary of a road,
 * - 20	`minimumRiskManoeuvre` - Lane dedicated to automated vehicles making a minimum risk manoeuvre,
 * - 21	`separatedCycleLane`   - Lane dedicated to exclusive or preferred use by bicycles that is phyisically separated from the vehicle-traffic lanes, e.g. by a verge.
 * - values 22 to 30             reserved for future use. 
 *
 * @category: Road topology information
 * @revision: Created in V2.1.1, named value 21 added in V2.2.1
*
LaneType::= INTEGER{
	traffic              (0),
	through	             (1),
	reversible           (2),
	acceleration         (3),
	deceleration         (4),
	leftHandTurning      (5),
	rightHandTurning     (6),
	dedicatedVehicle     (7),
	bus                  (8),
	taxi                 (9),
	hov                  (10),
	hot                  (11),
	pedestrian           (12),
	cycleLane            (13),
	median               (14),   
	striping             (15),
	trackedVehicle       (16),
	parking	             (17),
	emergency            (18),
	verge                (19),
	minimumRiskManoeuvre (20),
    exclusiveCycleLane   (21),
	unknown              (31)
}(0..31)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_ts_coding/denm_ts_LaneType.h>
#include <etsi_its_denm_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_denm_ts_msgs/LaneType.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/lane_type.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_LaneType(const denm_ts_LaneType_t& in, denm_ts_msgs::LaneType& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_LaneType(const denm_ts_msgs::LaneType& in, denm_ts_LaneType_t& out) {
  memset(&out, 0, sizeof(denm_ts_LaneType_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
