#define _CRT_SECURE_NO_WARNINGS		
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h> 										

bool scrivi_intero(const char *filename, int i) {
	if (filename == NULL) {
		return false;
	}
	FILE *f = fopen(filename, "w");

	fprintf(f, "%d", i);

	fclose(f);
	return true;
}