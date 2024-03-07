// コードを入力してください

#include "car.hpp"
#include "logger.hpp"

int main() {
  Car car1("Toyota", "Camry", 2020, 25'000);
  car1.displayInfo();
  car1.setPrice(30000);

  return 0;
}