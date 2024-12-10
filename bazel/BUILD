# load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "bazel",
    hdrs = [
        "config.h",
        "version.h"
    ],
    strip_include_prefix = "//ntirpc/bazel",
    deps = ["//ntirpc/ntirpc"],
    defines = [

        # Build controls.

        # "_MSPAC_SUPPORT=1",
        "HAVE_STDBOOL_H=1",
        # "HAVE_KRB5=1",
        "LINUX=1",
        # "BSDBASED=1",
        # "_HAVE_GSSAPI=1",
        "HAVE_STRING_H=1",
        "HAVE_STRINGS_H=1",
        # "LITTLEEND=1",
        # "BIGEND=1",
        "TIRPC_EPOLL=1",
        # "USE_RPC_RDMA=1",
        # "USE_LTTNG_NTIRPC=1",

        # Package stuff.

        "PACKAGE='libntirpc'",
        "PACKAGE_BUGREPORT=''",
        "PACKAGE_NAME='libntirpc'",
        "PACKAGE_STRING='libntirpc'",
        "PACKAGE_TARNAME='libntirpc'",
        "PACKAGE_URL=''",
        "PACKAGE_VERSION=''",

        # Copied from CMakeLists.txt
        "PORTMAP",
        "INET6",
        "_GNU_SOURCE",
    ],
)
