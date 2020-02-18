#ifndef HAVE_STRCSPN
#include <stddef.h>
size_t strcspn(const char *s1, const char *s2)
{
	const char *p, *q;
	for (p = s1; *p; p++) {
		for (q = s2; *q; q++)
			if (*p == *q)
				goto proceed;
		break;
		proceed:;
	}
	return p - s1;
}
#endif
