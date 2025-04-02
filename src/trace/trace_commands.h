#undef LTTNG_UST_TRACEPOINT_PROVIDER
#define LTTNG_UST_TRACEPOINT_PROVIDER valkey

#undef LTTNG_UST_TRACEPOINT_INCLUDE
#define LTTNG_UST_TRACEPOINT_INCLUDE "./trace_commands.h"

#if !defined(__VALKEY_TRACE_H__) || defined(LTTNG_UST_TRACEPOINT_HEADER_MULTI_READ)
#define __VALKEY_TRACE_H__

#include <lttng/tracepoint.h>

LTTNG_UST_TRACEPOINT_EVENT(
	/* Tracepoint provider name */
	valkey,

	/* Tracepoint name */
	command_call,

	/* Input arguments */
	LTTNG_UST_TP_ARGS(
		const char *, name,
		uint64_t, duration
	),

	/* Output event fields */
	LTTNG_UST_TP_FIELDS(
		lttng_ust_field_string(name, name)
		lttng_ust_field_integer(uint64_t, duration, duration)
	)
)

#endif /* __VALKEY_TRACE_H__*/

#include <lttng/tracepoint-event.h>
