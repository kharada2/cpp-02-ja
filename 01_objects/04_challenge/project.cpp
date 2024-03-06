#include "project.hpp"

#include <iostream>

#include "person.hpp"

Project::Project(){};

void Project::add_team_member(const Person& person) {
  // std::vector<Person> members = team.get_team_members();
  // for (auto i : members) {
  //   this->team.add_member(i.get_name());
  // };
  team.add_member(person);
};

void Project::print_team_members() const {
  const std::vector<Person> members = team.get_team_members();

  for (auto i : members) {
    std::cout << i.get_name() << std::endl;
  }
};