#include <iostream>

#include "person.hpp"
#include "project.hpp"
#include "team.hpp"

int main() {
  Person person1 = Person("Name1");
  Person person2 = Person("Name2");
  Person person3 = Person("Name3");

  Project project = Project();
  project.add_team_member(person1);
  project.add_team_member(person2);
  project.add_team_member(person3);
  project.print_team_members();

  return 0;
}