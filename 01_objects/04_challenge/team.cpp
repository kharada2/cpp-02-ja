#include "team.h"

void Team::add_member(std::string name) { team_members.push_back(name); }

std::vector<Person> Team::get_team_members() { return this->team_members; }