#pragma once
#include <string>
#include <vector>

class Person {
 public:
  Person(const std::string& name);
  std::string get_name() const;

 private:
  std::string name;
};
