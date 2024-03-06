#include "person.hpp"

#include <iostream>

Person::Person(const std::string& name) : name(name){};

std::string Person::get_name() const { return name; }