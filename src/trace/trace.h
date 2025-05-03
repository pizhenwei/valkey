#if !defined(__VALKEY_TRACE_H__)
#define __VALKEY_TRACE_H__

#include "trace/trace_db.h"
#include "trace/trace_cluster.h"
#include "trace/trace_sys.h"
#include "trace/trace_aof.h"
#include "trace/trace_server.h"
#include "trace/trace_commands.h"

#define TRACE_DB (1 << 0)
#define TRACE_CLUSTER (1 << 1)
#define TRACE_SYS (1 << 2)
#define TRACE_AOF (1 << 3)
#define TRACE_SERVER (1 << 4)
#define TRACE_COMMANDS (1 << 5)

#endif /* __VALKEY_TRACE_H__ */
