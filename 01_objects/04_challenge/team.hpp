#pragma once
#include "person.hpp"

class Team {
 public:
  Team();
  void add_member(const Person& person);
  std::vector<Person> get_team_members() const;

 private:
  std::vector<Person> team_members;
};