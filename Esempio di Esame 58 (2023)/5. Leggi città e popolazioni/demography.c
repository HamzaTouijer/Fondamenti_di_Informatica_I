#define _CRT_SECURE_NO_WARNINGS
#include "demography.h"
#include <stdio.h>
#include <stdlib.h>

struct city *read_cities(const char *filename, uint32_t *n) {

	FILE *f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}
	//leggo e alloco il numero di elementi nel file
	uint32_t num = fgetc(f);
	*n = num;
	 struct city *res = malloc(*n * sizeof(struct city));


		 fseek(f, 4, SEEK_SET);
		 for (uint32_t i = 0; i < num; ++i) {
			 res[i].name = malloc(num * sizeof(res[i].name));
			
			 char d = fgetc(f);
				 for (size_t j = 0;  d != 0; ++j) {
					 res[i].name[j] = d;
					 d = fgetc(f);
				 }
			 uint32_t *valore = malloc(sizeof(uint32_t));
			 fread(valore, sizeof(uint32_t), 1, f);
			 res[i].population = *valore;
		 }
	 
	return res;
	fclose(f);
	free(res);

}
/*

int main(void) {

	struct city *r = malloc(sizeof(struct city));
	uint32_t *num = malloc(sizeof(uint32_t));
	r = read_cities("cities01.bin", num);

	return 0;
}
*/