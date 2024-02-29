#include "person.h"

#include <iostream>

Person::Person(const std::string name) : name(name){};

std::string Person::get_name() { return this->name; }