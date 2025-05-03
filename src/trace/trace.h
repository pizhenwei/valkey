#if !defined(__VALKEY_TRACE_H__)
#define __VALKEY_TRACE_H__

#include "trace/trace_db.h"
#include "trace/trace_cluster.h"
#include "trace/trace_sys.h"
#include "trace/trace_aof.h"
#include "trace/trace_server.h"
#include "trace/trace_commands.h"

typedef struct valkeyTraceMask {
    unsigned aof : 1;
    unsigned server : 1;
    unsigned cluster : 1;
    unsigned sys : 1;
    unsigned db : 1;
    unsigned commands : 1;
    unsigned reserved : 2;
} valkeyTraceMask;

extern struct valkeyTraceMask trace_mask;

#define lttngLatencyTraceIfNeeded(type, event, var) \
    if (trace_mask.type)  valkey_##type##_trace(valkey_##type, "latency", (event), (var));

#endif /* __VALKEY_TRACE_H__ */
