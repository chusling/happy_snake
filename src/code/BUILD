
cc_library(
    name = "snake_lib",
    srcs = glob(["*.cc"]),
    hdrs =  glob(["*.h"]),
)

cc_binary(
    name = "game",
    srcs = ["game.cc"],
    deps = [
        ":snake_lib",
        ],
    linkopts = ["-lncurses",
                "-lprotobuf",
                "-pthread",],
)

cc_proto_library(
    name = "happy_snake_proto",
    deps = [
        ":happy_snake_lib",
    ],
    visibility = [
        "//visibility:public",],
)

proto_library(
    name = "happy_snake_lib",
    srcs = [
        "food_config.proto",
        "wall_config.proto",
        "snake_config.proto",],
    visibility = [
        "//visibility:public",
    ],
)
