#include "State.h"
#include <iostream>
#include <sol/sol.hpp>
#include <string>
#include "Output.h"

State::State() : lua() {
  lua.open_libraries(sol::lib::base);
  Output::info("Created global lua state.");
}

void State::run(std::string script){
  Output::info("Running a script.");
  lua.script(script);
  Output::info("Script done running.");
}

void State::runFile(std::string path){
    Output::info("Running " + path);
    lua.script_file(path);
    Output::info(path + " done running.");
}
  