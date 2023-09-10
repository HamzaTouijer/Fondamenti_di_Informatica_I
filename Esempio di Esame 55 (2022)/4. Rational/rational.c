#define _CRT_SECURE_NO_WARNINGS
#include "rational.h"
#include <stdio.h>
//non funziona perfettamente su olj
struct rational *rational_read(const char *filename, size_t *size) {
	FILE *f = fopen(filename, "r");
	if (f == NULL || size == NULL) {
		*size = 0;
		return NULL;
	}
	
	struct rational *res = malloc(sizeof(struct rational));
	res[0].num = malloc(sizeof(int));
	res[0].den = malloc(sizeof(unsigned int));
	size_t count = 0;
	for (size_t i = 0; ; ++i) {
		 fscanf(f, "%d", &res[i].num);
		 if (res[i].num == -1) {
			 break;
		 }
		int c = fgetc(f);
		if (c == -1) {
			break;
		}
		while (c != '/') {
			c = fgetc(f);
		}
		
		count += 1;
		fscanf(f, "%u", &res[i].den);
	}
	
	*size = count;
	fclose(f);
	return res;
}