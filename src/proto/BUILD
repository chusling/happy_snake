load("@rules_cc//cc:defs.bzl", "cc_proto_library")
package(default_visibility = ["//visibility:public"])

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
