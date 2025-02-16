filegroup(
  name = "srcs",
  srcs = glob(["src/*.h","src/*.c"],exclude=["src/lua.c","src/luac.c"]),
  visibility = ["//visibility:public"],
)

filegroup(
  name = "srcs_headers",
  srcs = ["src/lua.h","src/luaconf.h","src/lualib.h","src/lauxlib.h","src/lua.hpp"],
  visibility = ["//visibility:public"],
)