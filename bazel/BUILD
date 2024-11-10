load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "bazel",
    hdrs = ["config.h"],
    strip_include_prefix = "//ntirpc/bazel",
    deps = ["//ntirpc/ntirpc"],
    defines = [

        # Version information.

        "NTIRPC_VERSION_MAJOR='6'",
        "NTIRPC_VERSION_MINOR='.0.1'",
        "NTIRPC_VERSION_EXTRA",

        "NTIRPC_VERSION='6.0.1'",
        "NTIRPC_VERSION_COMMENT='Full-duplex and bi-directional ONC RPC on TCP.'",
        "_GIT_HEAD_COMMIT='d3512933482f26e18e9f4087e41e4d2d1bb0a0ac'",
        "_GIT_DESCRIBE='v4.0rc1-126-gd3512933'",

        # Build controls.

        # "_MSPAC_SUPPORT=1",
        "HAVE_STDBOOL_H=1",
        # "HAVE_KRB5=1",
        "LINUX=1",
        # "BSDBASED=1",
        "_HAVE_GSSAPI=1",
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

        # Defines from CMakeLists.txt
        "PORTMAP",
        "INET6",
        "_GNU_SOURCE",
    ],
)
