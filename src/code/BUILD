
cc_library(
    name = "snake_lib",
    srcs = ["food.cc",
            "wall.cc",
            "snake.cc",],
    hdrs = ["food.h",
            "snake.h",
            "wall.h",],
)

cc_binary(
    name = "game",
    srcs = ["game.cc"],
    deps = [
        ":snake_lib",
    ],
    linkopts = ["-lncurses ",
                "-lprotobuf ",],
)

