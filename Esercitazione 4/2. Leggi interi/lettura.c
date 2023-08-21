#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"
#include <stdio.h>
#include <stdint.h>

int *leggiinteri(const char *filename, size_t *size) {

	FILE *f = fopen(filename, "rb");    //"rb non traducce 10
	if (f == NULL) {
		return NULL;
	}

	size_t n;
	size_t num_read = 0;

	num_read = fread(&n, sizeof(unsigned int), 1, f);  //leggo  un file con numeri binari
	if (num_read != 1) {
		fclose(f);
		return NULL;
	}

	*size = n;
	int *x = (int*)calloc(*size, sizeof(int)); 
	if (x == NULL) {
		fclose(f);
		return NULL;
	}
	int tmp = 0;
	for (size_t i = 0; i < *size; i++) {
		num_read = fread(&tmp, sizeof(int), 1, f);
		if (num_read != 1) {
			free(x);
			fclose(f);
			return NULL;
		}
		x[i] = tmp;
	}

	fclose(f);
	return x;
}
