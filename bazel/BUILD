load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "bazel",
    hdrs = glob(["*.h"]),
    strip_include_prefix = "//ntirpc/bazel",
    deps = ["//ntirpc/ntirpc"],
)
