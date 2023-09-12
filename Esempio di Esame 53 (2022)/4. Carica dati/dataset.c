#define _CRT_SECURE_NO_WARNINGS
#include "dataset.h"
#include <stdio.h>

struct dataset *dataset_load(const char *filename) {
	FILE *f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}
	//contare il numero di righe nel file
	size_t rows = 0;
	while (1) {
		char elem = fgetc(f);
		if (elem == EOF) {
			break;
		}
		if (elem == '\n') {
			rows += 1;
		}
	}
	struct dataset *res = malloc(sizeof(struct dataset));
	res->nrows = rows;
	res->data = malloc(rows * sizeof(struct row));
	
	//trovo il nome del file e la prognosi
	for (size_t p = 0; p < rows; ++p) {
		res->data[p].filename = calloc(255, 1);
	}

	rewind(f);
	for (size_t v = 0; v < rows; ++v) {
		size_t i = 0;
		//nome file
		char c = fgetc(f);
		while (c != ',') {
			res->data[v].filename[i] = c;
			c = fgetc(f);
			++i;
		}
		//prognosi
		 while(c != '\n') {
			 if (c == 'M') {
				 res->data[v].prognosis = 'M';
			  }
			 if (c == 'S') {
				 res->data[v].prognosis = 'S';
			 }
			c = fgetc(f);
		}
	}
	fclose(f);
	return res;
	free(res);
}