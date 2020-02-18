#ifndef HAVE_EXPLICIT_BZERO
#include <stddef.h>
#include <string.h>
/* Set LEN bytes of S to 0.  The compiler will not delete a call to
   this function, even if S is dead after the call.  */
void explicit_bzero(void *s, size_t len)
{
	memset(s, '\0', len);
	/* Compiler barrier.  */
	asm volatile ("" ::: "memory");
}
#endif
