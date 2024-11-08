/* config.h file expanded by Cmake for build */

#include "version.h"

#ifndef CONFIG_H
#define CONFIG_H

/* Build controls */

/* #undef _MSPAC_SUPPORT */
#define HAVE_STDBOOL_H 1
/* #undef HAVE_KRB5 */
#define LINUX 1
/* #undef BSDBASED */
/* #undef _HAVE_GSSAPI */
#define HAVE_STRING_H 1
#define HAVE_STRINGS_H 1
/* #undef LITTLEEND */
/* #undef BIGEND */
#define TIRPC_EPOLL 1
/* #undef USE_RPC_RDMA */
/* #undef USE_LTTNG_NTIRPC */

/* Package stuff */
#define PACKAGE "libntirpc"
#define PACKAGE_BUGREPORT ""
#define PACKAGE_NAME "libntirpc"
#define PACKAGE_STRING "libntirpc "
#define PACKAGE_TARNAME "libntirpc"
#define PACKAGE_URL ""
#define PACKAGE_VERSION ""

// Bjorn: Defines from CMakeLists.txt
#define PORTMAP 1
#define INET6 1
#define _GNU_SOURCE 1

// #define USE_RPC_RDMA 1

#endif /* CONFIG_H */
