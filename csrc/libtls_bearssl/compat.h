#include <stddef.h>

#ifndef HAVE_FREEZERO
void freezero(void *, size_t);
#endif

#ifndef HAVE_REALLOCARRAY
void *reallocarray(void *, size_t, size_t);
#endif

#ifndef HAVE_TIMINGSAFE_MEMCMP
int timingsafe_memcmp(const void *, const void *, size_t);
#endif

#ifndef HAVE_STRSEP
char *strsep(char **sp, char *sep);
#endif

#ifndef HAVE_VASPRINTF
int vasprintf(char **strp, const char *format, va_list ap);
#endif

#ifndef HAVE_ASPRINTF
int asprintf(char **strp, const char *format, ...);
#endif

#ifndef HAVE_STPCPY
char* stpcpy(char *dst, const char *src);
#endif

#ifndef HAVE_EXPLICIT_BZERO
void explicit_bzero(void *s, size_t len);
#endif
