#include "team.h"

class Project {
 public:
  Project(const Team& team);
  void add_team_member(Team& team);
  void print_team_members();

 private:
  Team team;
};