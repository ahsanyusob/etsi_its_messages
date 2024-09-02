
#include <cmath>
#include <random>
#include <gtest/gtest.h>

#include <etsi_its_cam_msgs/msg/cam.hpp>
#include <etsi_its_msgs_utils/cam_access.hpp>

#include <etsi_its_cam_ts_msgs/msg/cam.hpp>
#include <etsi_its_msgs_utils/cam_ts_access.hpp>

#include <etsi_its_cpm_ts_msgs/msg/collective_perception_message.hpp>
#include <etsi_its_msgs_utils/cpm_ts_access.hpp>

#include <etsi_its_denm_msgs/msg/denm.hpp>
#include <etsi_its_msgs_utils/denm_access.hpp>

std::default_random_engine random_engine;
double randomDouble(double min, double max) {
  std::uniform_real_distribution<double> uniform_distribution_double(min, max);
  return uniform_distribution_double(random_engine);
}
int randomInt(int min, int max) {
  std::uniform_int_distribution<int> uniform_distribution_int(min, max);
  return uniform_distribution_int(random_engine);
}

namespace gm = geometry_msgs::msg;

namespace cam_msgs = etsi_its_cam_msgs::msg;
#include <impl/test_cam_access.cpp>

namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#include <impl/test_cam_ts_access.cpp>

namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#include <impl/test_cpm_ts_access.cpp>

namespace denm_msgs = etsi_its_denm_msgs::msg;
#include <impl/test_denm_access.cpp>


int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
