#ifndef STATE_H
#define STATE_H
#define SOL_ALL_SAFETIES_ON 1
#include <sol/sol.hpp>
#include <string>

class State{
  private:
    sol::state lua;
  public:
    State();
    void run(std::string script);
    void runFile(std::string path);
};

#endif