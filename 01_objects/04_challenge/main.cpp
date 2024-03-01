#include <iostream>

#include "project_all.h"

int main() {
  Person person1("Name1");
  Person person2("Name2");
  Person person3("Name3");

  Person person4("Name4");
  Person person5("Name5");
  Person person6("Name6");

  Team team1;
  team1.add_member(person1.get_name());
  team1.add_member(person2.get_name());
  team1.add_member(person3.get_name());

  Team team2;
  team2.add_member(person4.get_name());
  team2.add_member(person5.get_name());
  team2.add_member(person6.get_name());

  Project project(team1);
  project.add_team_member(team2);
  project.print_team_members();

  return 0;
}