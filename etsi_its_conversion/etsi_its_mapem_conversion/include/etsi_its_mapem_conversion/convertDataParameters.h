/** ============================================================================
MIT License

Copyright (c) 2023 Institute for Automotive Engineering (ika), RWTH Aachen University

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

// --- Auto-generated by asn1ToConversionHeader.py -----------------------------

#pragma once

#include <etsi_its_mapem_coding/DataParameters.h>
#include <etsi_its_primitives_conversion/convertIA5String.h>
#include <etsi_its_primitives_conversion/convertIA5String.h>
#include <etsi_its_primitives_conversion/convertIA5String.h>
#include <etsi_its_primitives_conversion/convertIA5String.h>
#ifdef ROS1
#include <etsi_its_mapem_msgs/DataParameters.h>
namespace mapem_msgs = etsi_its_mapem_msgs;
#else
#include <etsi_its_mapem_msgs/msg/data_parameters.hpp>
namespace mapem_msgs = etsi_its_mapem_msgs::msg;
#endif


namespace etsi_its_mapem_conversion {

void toRos_DataParameters(const DataParameters_t& in, mapem_msgs::DataParameters& out) {

  if (in.processMethod) {
    etsi_its_primitives_conversion::toRos_IA5String(*in.processMethod, out.process_method);
    out.process_method_is_present = true;
  }

  if (in.processAgency) {
    etsi_its_primitives_conversion::toRos_IA5String(*in.processAgency, out.process_agency);
    out.process_agency_is_present = true;
  }

  if (in.lastCheckedDate) {
    etsi_its_primitives_conversion::toRos_IA5String(*in.lastCheckedDate, out.last_checked_date);
    out.last_checked_date_is_present = true;
  }

  if (in.geoidUsed) {
    etsi_its_primitives_conversion::toRos_IA5String(*in.geoidUsed, out.geoid_used);
    out.geoid_used_is_present = true;
  }

}

void toStruct_DataParameters(const mapem_msgs::DataParameters& in, DataParameters_t& out) {

  memset(&out, 0, sizeof(DataParameters_t));

  if (in.process_method_is_present) {
    IA5String_t process_method;
    etsi_its_primitives_conversion::toStruct_IA5String(in.process_method, process_method);
    out.processMethod = new IA5String_t(process_method);
  }

  if (in.process_agency_is_present) {
    IA5String_t process_agency;
    etsi_its_primitives_conversion::toStruct_IA5String(in.process_agency, process_agency);
    out.processAgency = new IA5String_t(process_agency);
  }

  if (in.last_checked_date_is_present) {
    IA5String_t last_checked_date;
    etsi_its_primitives_conversion::toStruct_IA5String(in.last_checked_date, last_checked_date);
    out.lastCheckedDate = new IA5String_t(last_checked_date);
  }

  if (in.geoid_used_is_present) {
    IA5String_t geoid_used;
    etsi_its_primitives_conversion::toStruct_IA5String(in.geoid_used, geoid_used);
    out.geoidUsed = new IA5String_t(geoid_used);
  }

}

}