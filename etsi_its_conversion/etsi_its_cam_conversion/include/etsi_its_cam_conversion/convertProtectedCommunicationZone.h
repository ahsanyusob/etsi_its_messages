#pragma once

#include <etsi_its_cam_coding/ProtectedCommunicationZone.h>
#include <etsi_its_cam_conversion/convertProtectedZoneType.h>
#include <etsi_its_cam_conversion/convertTimestampIts.h>
#include <etsi_its_cam_conversion/convertLatitude.h>
#include <etsi_its_cam_conversion/convertLongitude.h>
#include <etsi_its_cam_conversion/convertProtectedZoneRadius.h>
#include <etsi_its_cam_conversion/convertProtectedZoneID.h>
#include <etsi_its_cam_msgs/ProtectedCommunicationZone.h>


namespace etsi_its_cam_conversion {

void toRos_ProtectedCommunicationZone(const ProtectedCommunicationZone_t& in, etsi_its_cam_msgs::ProtectedCommunicationZone& out) {

  toRos_ProtectedZoneType(in.protectedZoneType, out.protected_zone_type);
  if (in.expiryTime) {
    toRos_TimestampIts(*in.expiryTime, out.expiry_time);
    out.expiry_time_is_present = true;
  }

  toRos_Latitude(in.protectedZoneLatitude, out.protected_zone_latitude);
  toRos_Longitude(in.protectedZoneLongitude, out.protected_zone_longitude);
  if (in.protectedZoneRadius) {
    toRos_ProtectedZoneRadius(*in.protectedZoneRadius, out.protected_zone_radius);
    out.protected_zone_radius_is_present = true;
  }

  if (in.protectedZoneID) {
    toRos_ProtectedZoneID(*in.protectedZoneID, out.protected_zone_i_d);
    out.protected_zone_i_d_is_present = true;
  }

}

void toStruct_ProtectedCommunicationZone(const etsi_its_cam_msgs::ProtectedCommunicationZone& in, ProtectedCommunicationZone_t& out) {
    
  memset(&out, 0, sizeof(ProtectedCommunicationZone_t));

  toStruct_ProtectedZoneType(in.protected_zone_type, out.protectedZoneType);
  if (in.expiry_time_is_present) {
    TimestampIts_t expiry_time;
    toStruct_TimestampIts(in.expiry_time, expiry_time);
    out.expiryTime = new TimestampIts_t(expiry_time);
  }

  toStruct_Latitude(in.protected_zone_latitude, out.protectedZoneLatitude);
  toStruct_Longitude(in.protected_zone_longitude, out.protectedZoneLongitude);
  if (in.protected_zone_radius_is_present) {
    ProtectedZoneRadius_t protected_zone_radius;
    toStruct_ProtectedZoneRadius(in.protected_zone_radius, protected_zone_radius);
    out.protectedZoneRadius = new ProtectedZoneRadius_t(protected_zone_radius);
  }

  if (in.protected_zone_i_d_is_present) {
    ProtectedZoneID_t protected_zone_i_d;
    toStruct_ProtectedZoneID(in.protected_zone_i_d, protected_zone_i_d);
    out.protectedZoneID = new ProtectedZoneID_t(protected_zone_i_d);
  }

}

}