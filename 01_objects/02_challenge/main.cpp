// コードを入力してください
#include <iostream>

#include "rectangle.h"

int main() {
  Rectangle in_data{4, 5};

  float result = Rectangle_area(in_data);

  std::cout << result << std::endl;

  return 0;
}