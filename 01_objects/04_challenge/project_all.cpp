#include "project_all.h"

#include <iostream>

// Person
Person::Person(const std::string& name) : name(name){};
std::string Person::get_name() { return this->name; }

// Team
void Team::add_member(const std::string& name) { team_members.push_back(name); }
std::vector<Person> Team::get_team_members() { return this->team_members; }
Project::Project(const Team& team) : team(team){};

// Project
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