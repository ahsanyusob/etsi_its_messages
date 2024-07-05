/** ============================================================================
MIT License

Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University
Copyright (c) 2024 Instituto de Telecomunicações, Universidade de Aveiro

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

#include <stdexcept>

#include <etsi_its_cpm_coding/cpm_ActionIdList.h>
#include <etsi_its_cpm_conversion/convertActionId.h>
#include <etsi_its_cpm_conversion/convertActionIdList.h>
#ifdef ROS1
#include <etsi_its_cpm_msgs/ActionIdList.h>
namespace cpm_msgs = etsi_its_cpm_msgs;
#else
#include <etsi_its_cpm_msgs/msg/action_id_list.hpp>
namespace cpm_msgs = etsi_its_cpm_msgs::msg;
#endif


namespace etsi_its_cpm_conversion {

void toRos_ActionIdList(const cpm_ActionIdList_t& in, cpm_msgs::ActionIdList& out) {
  for (int i = 0; i < in.list.count; ++i) {
    cpm_msgs::ActionId el;
    toRos_ActionId(*(in.list.array[i]), el);
    out.array.push_back(el);
  }
}

void toStruct_ActionIdList(const cpm_msgs::ActionIdList& in, cpm_ActionIdList_t& out) {
  memset(&out, 0, sizeof(cpm_ActionIdList_t));

  for (int i = 0; i < in.array.size(); ++i) {
    cpm_ActionId_t* el = (cpm_ActionId_t*) calloc(1, sizeof(cpm_ActionId_t));
    toStruct_ActionId(in.array[i], *el);
    if (asn_sequence_add(&out, el)) throw std::invalid_argument("Failed to add to A_SEQUENCE_OF");
  }
}

}
