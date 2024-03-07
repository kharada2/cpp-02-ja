#include <iostream>

#include "car.hpp"
#include "driver.hpp"

int main() {
  Car car1("Toyota", "Camry", 2020, 25'000);
  Driver driver1("Harada", 30);

  car1.setDriver(&driver1);
  Driver* driver = car1.getDriver();
  std::cout << driver->get_driver_name() << std::endl;

  return 0;
}