#include <iostream>
#include "State.h"

int main(int, char*[]) {
  State* state = new State();
  state->run("print('bark bark bark!')");
  state->runFile("/workspaces/microlua/init.lua");
  return 0;
}