#include <string>

#pragma once

#include "driver.hpp"

class Car {
 public:
  Car(std::string make, std::string model, int year, double price);

  void setPrice(double price);

  std::string getMake() const;
  std::string getModel() const;
  int getYear() const;
  double getPrice() const;

  void displayInfo() const;
  void setDriver(Driver* driver);
  Driver* getDriver() const;

 private:
  void printPriceChange(double from, double to) const;

  std::string make;
  std::string model;
  int year;
  double price;
  Driver* driver;
};
