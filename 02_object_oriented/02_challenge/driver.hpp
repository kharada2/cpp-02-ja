// コードを入力してください
#pragma once

#include <iostream>

class Driver {
 public:
  Driver(std::string name, int age);
  std::string get_driver_name();

 private:
  std::string name;
  int age;
};