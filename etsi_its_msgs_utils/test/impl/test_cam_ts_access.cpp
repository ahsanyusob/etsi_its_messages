#include <gtest/gtest.h>
#include <cmath>

namespace cam_ts_access = etsi_its_cam_ts_msgs::access;

TEST(etsi_its_cam_ts_msgs, test_set_get_cam) {
  cam_ts_msgs::CAM cam;

  int station_id = randomInt(cam_ts_msgs::StationId::MIN, cam_ts_msgs::StationId::MAX);
  int protocol_version = randomInt(cam_ts_msgs::OrdinalNumber1B::MIN, cam_ts_msgs::OrdinalNumber1B::MAX);
  cam_ts_access::setItsPduHeader(cam, station_id, protocol_version);
  EXPECT_EQ(cam_ts_msgs::MessageId::CAM, cam.header.message_id.value);
  EXPECT_EQ(protocol_version, cam.header.protocol_version.value);
  EXPECT_EQ(station_id, cam_ts_access::getStationID(cam));

  // https://www.etsi.org/deliver/etsi_ts/102800_102899/10289402/01.02.01_60/ts_10289402v010201p.pdf
  // DE_TimestampITS
  // The value for TimestampIts for 2007-01-01T00:00:00.000Z is
  // 94694401000 milliseconds, which includes one leap second insertion
  // since 2004-01-01T00:00:00.000Z.
  uint64_t t_2007 = ((uint64_t)1167609600) * 1e9;
  cam_ts_msgs::TimestampIts t_its;
  EXPECT_EQ(1, etsi_its_msgs::getLeapSecondInsertionsSince2004(t_2007 * 1e-9));
  cam_ts_access::setTimestampITS(t_its, t_2007, etsi_its_msgs::getLeapSecondInsertionsSince2004(t_2007 * 1e-9));
  EXPECT_EQ(94694401000, t_its.value);
  cam_ts_access::setGenerationDeltaTime(cam, t_2007, etsi_its_msgs::getLeapSecondInsertionsSince2004(t_2007 * 1e-9));
  EXPECT_EQ(94694401000 % 65536, cam_ts_access::getGenerationDeltaTimeValue(cam));
  cam_ts_msgs::TimestampIts t_its2;
  uint64_t t_2007_off = t_2007 + 5 * 1e9;
  cam_ts_access::setTimestampITS(t_its2, t_2007_off, etsi_its_msgs::getLeapSecondInsertionsSince2004(t_2007 * 1e-9));
  EXPECT_EQ(
      94694401000,
      cam_ts_access::getTimestampITSFromGenerationDeltaTime(cam_ts_access::getGenerationDeltaTime(cam), t_its2).value);
  EXPECT_EQ(t_2007, cam_ts_access::getUnixNanosecondsFromGenerationDeltaTime(
                        cam_ts_access::getGenerationDeltaTime(cam), t_its2,
                        etsi_its_msgs::getLeapSecondInsertionsSince2004(t_2007 * 1e-9)));
  EXPECT_EQ(t_2007, cam_ts_access::getUnixNanosecondsFromGenerationDeltaTime(
                        cam_ts_access::getGenerationDeltaTime(cam), t_2007_off,
                        etsi_its_msgs::getLeapSecondInsertionsSince2004(t_2007 * 1e-9)));

  int stationType_val = randomInt(cam_ts_msgs::TrafficParticipantType::MIN, cam_ts_msgs::TrafficParticipantType::MAX);
  cam_ts_access::setStationType(cam, stationType_val);
  EXPECT_EQ(stationType_val, cam_ts_access::getStationType(cam));

  double latitude = randomDouble(-90.0, 90.0);
  double longitude = randomDouble(-180.0, 180.0);
  cam_ts_access::setReferencePosition(cam, latitude, longitude);
  EXPECT_NEAR(latitude, cam_ts_access::getLatitude(cam), 1e-7);
  EXPECT_NEAR(longitude, cam_ts_access::getLongitude(cam), 1e-7);
  latitude = randomDouble(-90.0, 90.0);
  longitude = randomDouble(-180.0, 180.0);
  double altitude = randomDouble(-1000.0, 8000.0);
  cam_ts_access::setReferencePosition(cam, latitude, longitude, altitude);
  EXPECT_NEAR(latitude, cam_ts_access::getLatitude(cam), 1e-7);
  EXPECT_NEAR(longitude, cam_ts_access::getLongitude(cam), 1e-7);
  EXPECT_NEAR(altitude, cam_ts_access::getAltitude(cam), 1e-2);

  // Set specific position to test utm projection
  latitude = 50.787467;
  longitude = 6.046498;
  altitude = 209.0;
  cam_ts_access::setReferencePosition(cam, latitude, longitude, altitude);
  int zone;
  bool northp;
  gm::PointStamped utm = cam_ts_access::getUTMPosition(cam, zone, northp);
  EXPECT_NEAR(291827.02, utm.point.x, 1e-1);
  EXPECT_NEAR(5630349.72, utm.point.y, 1e-1);
  EXPECT_EQ(altitude, utm.point.z);
  EXPECT_EQ(32, zone);
  EXPECT_EQ(true, northp);
  cam_ts_access::setFromUTMPosition(cam, utm, zone, northp);
  EXPECT_NEAR(latitude, cam_ts_access::getLatitude(cam), 1e-7);
  EXPECT_NEAR(longitude, cam_ts_access::getLongitude(cam), 1e-7);
  EXPECT_NEAR(altitude, cam_ts_access::getAltitude(cam), 1e-2);

  double heading_val = randomDouble(0.0, 360.0);
  cam_ts_access::setHeading(cam, heading_val);
  EXPECT_NEAR(heading_val, cam_ts_access::getHeading(cam), 1e-1);

  double length = randomDouble(0.0, 102.2);
  double width = randomDouble(0.0, 6.2);
  cam_ts_access::setVehicleDimensions(cam, length, width);
  EXPECT_NEAR(length, cam_ts_access::getVehicleLength(cam), 1e-1);
  EXPECT_NEAR(width, cam_ts_access::getVehicleWidth(cam), 1e-1);

  double speed_val = randomDouble(0.0, 163.82);
  cam_ts_access::setSpeed(cam, speed_val);
  EXPECT_NEAR(speed_val, cam_ts_access::getSpeed(cam), 1e-2);

  double lon_accel = randomDouble(-16.0, 16.0);
  double lat_accel = randomDouble(-16.0, 16.0);
  cam_ts_access::setLongitudinalAcceleration(cam, lon_accel);
  EXPECT_NEAR(lon_accel, cam_ts_access::getLongitudinalAcceleration(cam), 1e-1);
  cam_ts_access::setLateralAcceleration(cam, lat_accel);
  EXPECT_NEAR(lat_accel, cam_ts_access::getLateralAcceleration(cam), 1e-1);

  std::vector<bool> exterior_lights(cam_ts_msgs::ExteriorLights::SIZE_BITS);
  for (int i = 0; i < cam_ts_msgs::ExteriorLights::SIZE_BITS; i++) {
    exterior_lights.at(i) = randomInt(0, 1);
  }
  cam.cam.cam_parameters.low_frequency_container_is_present = true;
  cam.cam.cam_parameters.low_frequency_container.choice =
      cam_ts_msgs::LowFrequencyContainer::CHOICE_BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY;
  cam_ts_access::setExteriorLights(cam, exterior_lights);
  EXPECT_EQ(exterior_lights, cam_ts_access::getExteriorLights(cam));
}