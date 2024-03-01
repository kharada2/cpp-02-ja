#pragma once
#include <string>
#include <vector>

class Person {
 public:
  Person(const std::string& name);
  std::string get_name();

 private:
  std::string name;
};

class Team {
 public:
  void add_member(const std::string& name);
  std::vector<Person> get_team_members();

 private:
  std::vector<Person> team_members;
};

class Project {
 public:
  Project(const Team& team);
  void add_team_member(Team& team);
  void print_team_members();

 private:
  Team team;
};