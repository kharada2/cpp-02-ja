#include "traffic_light.h"

// コードを入力してください

std::string get_action(TrafficLight light) {
  std::string result;
  if (light == TrafficLight::red) {
    result = "Stop";
  } else if (light == TrafficLight::yellow) {
    result = "Caution";
  } else if (light == TrafficLight::green) {
    result = "Go";
  }

  return result;
}