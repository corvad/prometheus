#ifndef CLASSA_H
#define CLASSA_H
#include "LuaClass.h"
#include <string>

class ClassA : LuaClass {
  public:
    ClassA(std::string name);
    static void register();
};

#endif CLASSA_H