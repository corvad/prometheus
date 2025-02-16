#include "ClassA.h"

void ClassA::register(){
  LuaClass::registerClass("ClassA");
  //LuaClass::registerContructor("",);
  LuaClass::registerFunction("func_name",&ClassA::func_name);
  LuaClass::registerFunction();
  LuaClass::registerValue("aslkdjf",&ClassA::value);
}