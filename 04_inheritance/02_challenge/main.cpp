#include <iostream>

#include "circle.hpp"

int main() {
  Circle circle(2.0f);
  std::cout << circle.getArea() << std::endl;
  return 0;
}