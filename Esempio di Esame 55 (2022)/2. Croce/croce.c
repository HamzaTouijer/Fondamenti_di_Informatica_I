#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void stampa_croce(FILE *f, size_t dim) {
	if (dim == 0) {
		return;
	}
	//de dim è 1
	if (dim == 1) {
		fprintf(f, "\\");
		fprintf(f, "/\n");
		fprintf(f, "/");
		fprintf(f, "\\\n");
	}
	//se dim >=2
	if (dim >= 2) {
		size_t  i_space = 0;
		size_t space = dim * 2 - 2;
		for (size_t i = 0; i < dim; ++i) {
			for (size_t i = 0; i < i_space; ++i) {
				fprintf(f, " ");
			}
			fprintf(f, "\\");
			for (size_t i = 0; i < space; ++i) {
				fprintf(f, " ");
			}
			fprintf(f, "/\n");
			space -= 2;
			++i_space;
		}

		size_t d_space = 0;
		size_t spaced = dim - 1;
		for (size_t i = 0; i < dim; ++i) {
			for (size_t i = 0; i < spaced; ++i) {
				fprintf(f, " ");
			}
			fprintf(f, "/");
			for (size_t i = 0; i < d_space; ++i) {
				fprintf(f, " ");
			}
			fprintf(f, "\\\n");
			d_space += 2;
			--spaced;
		}
	}
}
