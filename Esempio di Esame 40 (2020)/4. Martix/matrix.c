#include "matrix.h"
#include <stdio.h>

struct matrix *mirror_mat(const struct matrix *m) {
	if (m == NULL) {
		return NULL;
	}

	struct matrix *res = malloc(sizeof(struct matrix));
	res->rows = m->rows;
	res->cols = m->cols;
	res->data = malloc(res->cols * res->rows * sizeof(double));
	size_t mid = 0;
	if (res->cols % 2 != 0 ) {
		 mid = res->cols / 2;
	}

	for (size_t r = 0; r < res->rows; ++r) {
		int cm = m->cols-1;
		for (size_t c = 0; c < res->cols; ++c) {
			if (c == mid && res->cols % 2 != 0) {
				res->data[r * res->cols + c] = m->data[r * res->cols + c];
			}
			else {
				res->data[r * res->cols + c] = m->data[r * res->cols + cm];
			}
			--cm;
		}
	}

	return res;
	free(res);
}