#include "garage.hpp"

#include <algorithm>
#include <iostream>

Garage::Garage() {}

void Garage::addCar(Car* car) { cars.push_back(car); }

void Garage::removeCar(Car* car) {
  auto it = std::find(cars.begin(), cars.end(), car);
  if (it != cars.end()) {
    cars.erase(it);
  } else {
    std::cerr << "The car is not exist" << std::endl;
  }
}

int Garage::getNumCars() { return cars.size(); }