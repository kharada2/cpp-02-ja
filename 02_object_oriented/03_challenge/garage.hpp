#pragma once
#include <vector>

#include "car.hpp"

class Garage {
 public:
  Garage();
  void addCar(Car* car);
  void removeCar(Car* car);
  int getNumCars();

 private:
  std::vector<Car*> cars;
};