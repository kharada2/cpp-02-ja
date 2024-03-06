#include "team.hpp"

Team::Team(){};

void Team::add_member(const Person& person) { team_members.push_back(person.get_name()); }

std::vector<Person> Team::get_team_members() const { return team_members; }