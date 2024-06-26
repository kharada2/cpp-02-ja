#include "person.hpp"
#include "team.hpp"

class Project {
 public:
  Project();
  void add_team_member(const Person& person);
  void print_team_members() const;

 private:
  Team team;
};