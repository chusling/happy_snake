load("@rules_cc//cc:defs.bzl", "cc_binary")


cc_binary(
    name = "function_test",
    srcs = ["function_test.cc"],
    linkopts = ["-lncurses ",],
)

cc_proto_library(
    name = "happy_snake_proto",
    deps = [
        ":happy_snake_lib",
    ],
    visibility = [
        "//visibility:public",
    ],
)

proto_library(
    name = "happy_snake_lib",
    srcs = [
        "food_config.proto",
        "wall_config.proto",
        "snake_config.proto",
    ],
)

"-lprotobuf",
"-pthread",


cc_library(
    name = "snake_lib",
    srcs = ["food.cc",
            "wall.cc",
            "snake.cc",],
    hdrs = ["food.h",
            "snake.h",
            "wall.h",],
)
