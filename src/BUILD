cc_library(
    name = "computational_geometry_headers",
    srcs = glob(["include/**/*.h"]),
    visibility = ["//visibility:public"],
    copts = ["-Isrc/include"],
)

cc_library(
    name = "point",
    srcs = ["Point2D.cc"],
    copts = ["-Isrc/include"],
    visibility = ["//visibility:public"],
    deps = [":computational_geometry_headers"],
)