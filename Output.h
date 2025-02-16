#ifndef OUTPUT_H
#define OUTPUT_H
#include <string>

class Output{
  public:
    static void debug(std::string out);
    static void error(std::string out);
    static void info(std::string out);
};

#endif