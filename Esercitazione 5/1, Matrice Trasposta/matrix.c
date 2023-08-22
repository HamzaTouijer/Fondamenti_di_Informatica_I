#include "matrix.h"
#include <stdlib.h>

struct matrix *mat_transpose(const struct matrix *mat) {
	if (mat == NULL) {
		return NULL;
	}

	struct matrix *t = malloc(sizeof(struct matrix));
	t->rows = mat->cols;
	t->cols = mat->rows;
	t->data = malloc(t->rows * t->cols * sizeof(double));

	for (size_t r = 0; r < mat->rows; ++r) {
		for (size_t c = 0; c < mat->cols; ++c) {

			t->data[c *mat->rows +r] = mat->data[r * mat->cols + c];
		}
	}
	return t;
	free(t);
}
/*
int main(void) {

	struct matrix *A = malloc(sizeof(struct matrix));
	double datam[] = { 1.0, 2.0, 3.0,4.0, 5.0, 6.0 };
	A->rows = 2;
	A->cols = 3;
	A->data = datam;


	struct matrix *tr = mat_transpose(A);

	return 0;
}
*/