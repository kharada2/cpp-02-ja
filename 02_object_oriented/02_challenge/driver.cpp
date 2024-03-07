#include "driver.hpp"

Driver::Driver(std::string name, int age) : name(name), age(age) {}

std::string Driver::get_driver_name() { return name; }