#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"
#include <stdio.h>
#include <stdbool.h>

double *leggidouble(const char *filename, size_t *size) {

	FILE *f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	double *x = NULL;
	size_t n = 0;

	while (true) {
		double d;
		int res = fscanf(f, "%lf", &d);
		if (res != 1) {
			break;
		}
		++n;
		x = realloc(x, n * sizeof(double));
		x[n - 1] = d;
	}

	*size = n;
	fclose(f);
	return x;
}