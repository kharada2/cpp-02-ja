#include "project.h"

#include <iostream>

Project::Project(const Team& team) : team(team){};

void Project::add_team_member(Team& team) {
  std::vector<Person> members = team.get_team_members();
  for (auto i : members) {
    this->team.add_member(i.get_name());
  };
};

void Project::print_team_members() {
  std::vector<Person> members = this->team.get_team_members();

  for (auto i : members) {
    std::cout << i.get_name() << std::endl;
  }
};