#include "pouco2000_ros/pouco2000_debug.hpp"
#include "pouco2000_ros_msgs/Potentiometers.h"

 
int main(int argc, char **argv){
  ros::init(argc, argv, "debug_fake_publisher_potentiometers_circle_node");

  ros::NodeHandle n;
  auto gen = [](){
    return rnd::gen<float>(0,10); 
  }; 

  FakePublisher<pouco2000_ros_msgs::Potentiometers> fake_publisher(n,"potentiometers_circle");
  fake_publisher.run<float>(5,gen);

  return 0;
}