#include "matrix.h"


struct matrix *matrix_flip_v(const struct matrix *m) {

	if (m == NULL) {
		return NULL;
	}

	struct matrix *res = calloc(sizeof(struct matrix), 1);
	res->rows = m->rows;
	res->cols = m->cols;
	res->data = calloc(res->rows * res->cols, sizeof(double));

	//approccio per riga

	for (size_t c = 0; c < res->cols; ++c) {
		size_t rm = m->rows-1;
		for (size_t r = 0; r < res->rows; ++r) {
			res->data[r * res->cols + c] = m->data[rm * res->cols + c];
			--rm;
		}
	}

	return res;
}
/*
int main(void) {

	struct matrix *A = calloc(sizeof(struct matrix), 1);
	double datam[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 };
	A->rows = 3;
	A->cols = 3;
	A->data = datam;

	struct matrix *r = matrix_flip_v(A);

	return 0;
}
*/