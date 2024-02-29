#pragma once
#include "person.h"

class Team {
 public:
  void add_member(std::string name);
  std::vector<Person> get_team_members();

 private:
  std::vector<Person> team_members;
};