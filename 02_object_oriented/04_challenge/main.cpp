#include <iostream>

#include "car.hpp"
#include "tire.hpp"

int main() {
  Car car1("Toyota", "Camry", 2020, 25'000);
  Car car2("Honda", "Civic", 2021, 23'000);

  car1.setTireSize(16);

  std::cout << car1.getTireSize() << std::endl;

  return 0;
}