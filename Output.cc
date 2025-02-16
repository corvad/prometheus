#include "Output.h"
#include <iostream>
#include <string>

void Output::info(std::string out){
  std::cout << "[INFO] " << out << '\n';
}
void Output::debug(std::string out){
  std::cout << "[DEBUG] " << out << '\n';
}
void Output::error(std::string out){
  std::cout << "[ERROR] " << out << '\n';
}