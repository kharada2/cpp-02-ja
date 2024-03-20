#include <iostream>

#include "car.hpp"
#include "motorcycle.hpp"
#include "vehicle.hpp"

int main() {
  Car car;
  car.set_fuel(10.0f);
  std::cout << car.get_fuel() << std::endl;

  Motorcycle motorcycle;
  motorcycle.set_speed(20.0f);
  std::cout << motorcycle.get_speed() << std::endl;

  return 0;
}