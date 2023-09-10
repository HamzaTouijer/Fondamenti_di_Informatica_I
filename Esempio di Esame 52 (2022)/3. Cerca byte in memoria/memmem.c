#include <stdlib.h> 
#include <string.h>

const void *memmem(const void *pagliaio, size_t psize, const void *ago, size_t asize) {
	if (pagliaio == NULL || ago == NULL || psize == 0 || asize == 0) {
		return NULL;
	}
	const void *ps = memchr(pagliaio, ago, psize);
	return ps;
}