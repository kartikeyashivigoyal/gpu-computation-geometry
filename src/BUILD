cc_library(
    name="computational_geometry_headers",
    srcs=glob(["include/**/*.h"]),
    visibility=["//visibility:public"],
    copts=["-Isrc/include"],
)

cc_binary(name="computational_geometry_lib",
          srcs=["Point2D.cc"],
          copts=["-Isrc/include"],
          visibility=["//visibility:public"],
          deps=[":computational_geometry_headers"],
          linkstatic=True,
          linkshared=True)

py_binary(name="polygon",
          srcs=["polygon.py"],
          data=[":computational_geometry_lib"])
