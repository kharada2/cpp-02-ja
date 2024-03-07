#include <iostream>

#include "car.hpp"
#include "garage.hpp"

int main() {
  Garage garage1;
  Car car1("Toyota", "Camry", 2020, 25'000);
  Car car2("Honda", "Civic", 2021, 23'000);
  Car car3("Ford", "Mustang", 2019, 28'000);
  Car car4("Lexus", "Is", 2019, 55'000);
  garage1.addCar(&car1);
  garage1.addCar(&car2);
  garage1.addCar(&car3);

  garage1.removeCar(&car3);
  garage1.removeCar(&car4);

  std::cout << garage1.getNumCars() << std::endl;

  return 0;
}