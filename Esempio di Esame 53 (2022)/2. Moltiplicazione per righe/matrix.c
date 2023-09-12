#include "matrix.h"

struct matrix *mat_rowmul(const struct matrix *m1, const struct matrix *m2) {
	if (m1 == NULL || m2 == NULL) {
		return NULL;
	}
	//m2 deve avere tante righe quante m1 e una sola colonna 
	if (m2->rows == m1->rows && m2->cols == 1) {

		struct matrix *res = calloc(1, sizeof(struct matrix));
		res->rows = m1->rows;
		res->cols = m1->cols;
		res->data = calloc(res->rows * res->cols, sizeof(double));

		for (size_t r = 0; r < res->rows; ++r) {
			for (size_t c = 0; c < res->cols; ++c) {

				res->data[r * res->cols + c] = m1->data[r * res->cols + c] * m2->data[r];

			}
		}

		return res;
	}
	else {
		return NULL;
	}
}



/*
int main(void) {
	struct matrix a1;
	struct matrix a2;

	double data_a1[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };
	a1.rows = 2;
	a1.cols = 3;
	a1.data = data_a1;

	double data_a2[] = { 7.0, 8.0};
	a2.rows = 2;
	a2.cols = 1;
	a2.data = data_a2;

	struct matrix *r = mat_rowmul(&a1, &a2);


	return 0;
}

*/