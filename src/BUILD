# load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

# System dependencies:
# apt install liburcu-dev libnsl-dev

cc_library(
    name = "ntirpc",
    srcs = [
        "auth_none.c",
        "auth_unix.c",
        "authunix_prot.c",
        "bindresvport.c",
        "bsd_epoll.c",
        "city.c",
        "clnt_bcast.c",
        "clnt_dg.c",
        "clnt_generic.c",
        "clnt_perror.c",
        "clnt_raw.c",
        "clnt_simple.c",
        "clnt_vc.c",
        "getnetconfig.c",
        "getnetpath.c",
        "getpeereid.c",
        "getrpcent.c",
        "mt_misc.c",
        "pmap_prot.c",
        "pmap_prot2.c",
        "pmap_rmt.c",
        "rbtree.c",
        "rbtree_x.c",
        "rpc_prot.c",
        "rpc_callmsg.c",
        "rpc_commondata.c",
        "rpc_crc32.c",
        "rpc_dplx_msg.c",
        "rpc_dtablesize.c",
        "rpc_generic.c",
        "rpcb_clnt.c",
        "rpcb_prot.c",
        "rpcb_st_xdr.c",
        "strlcpy.c",
        "svc.c",
        "svc_auth.c",
        "svc_auth_unix.c",
        "svc_auth_none.c",
        "svc_dg.c",
        "svc_generic.c",
        "svc_raw.c",
        "svc_rqst.c",
        "svc_simple.c",
        "svc_vc.c",
        "svc_xprt.c",
        "xdr.c",
        "xdr_float.c",
        "xdr_mem.c",
        "xdr_reference.c",
        "xdr_ioq.c",
        "svc_ioq.c",
        "work_pool.c",
    ],
    hdrs = [
        "clnt_internal.h",
        "haproxy.h",
        "rpc_com.h",
        "rpc_dplx_internal.h",
        "rpc_raw.h",
        "rpc_rdma.h",
        "strl.h",
        "svc_internal.h",
        "svc_ioq.h",
        "svc_xprt.h",
    ],
    deps = [
        "//ntirpc/bazel",
        "//ntirpc/ntirpc",
        "//ntirpc/ntirpc/lttng",
        "//ntirpc/ntirpc/misc",
        "//ntirpc/ntirpc/rpc",
    ],
    linkopts = ["-lpthread"],
)

# Additional system dependencies:
# Debian: apt install libkrb5-dev

cc_library(
    name = "ntirpc_gss",
    srcs = [
        "auth_gss.c",
        "authgss_hash.c",
        "authgss_prot.c",
        "svc_auth_gss.c",
    ],
    hdrs = [
        "rpc_com.h",
        "rpc_dplx_internal.h",
        "svc_internal.h",
    ],
    deps = [
        ":ntirpc",
        "//ntirpc/bazel",
        "//ntirpc/ntirpc/lttng",
        "//ntirpc/ntirpc/misc",
        "//ntirpc/ntirpc/rpc",
    ],
)

# Additional system dependencies:
# Debian: apt install librdmacm-dev

# cc_library(
#     name = "ntirpc_rdma",
#     srcs = [
#         "clnt_rdma.c",
#         "rpc_rdma.c",
#         "svc_rdma.c",
#         "xdr_rdma.c",
#     ],
#     hdrs = [
#         "clnt_internal.h",
#         "rpc_com.h",
#         "rpc_dplx_internal.h",
#         "rpc_rdma.h",
#         "svc_internal.h",
#         "svc_xprt.h",
#     ],
#     deps = [
#         # ":ntirpc",
#         "//ntirpc/bazel",
#         "//ntirpc/ntirpc/lttng",
#         "//ntirpc/ntirpc/misc",
#         "//ntirpc/ntirpc/rpc",
#     ],
# )
