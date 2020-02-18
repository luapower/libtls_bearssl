#ifndef HAVE_ASPRINTF
#include <stdarg.h>
#include "compat.h"
int asprintf(char **strp, const char *format, ...)
{
	va_list ap;
	va_start(ap, format);
	int retval = vasprintf(strp, format, ap);
	va_end(ap);
	return retval;
}
#endif
