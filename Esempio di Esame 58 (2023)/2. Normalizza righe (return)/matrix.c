#include "matrix.h"
#include <math.h>


struct matrix *mat_normalize_rows(const struct matrix *m) {
	if (m == NULL) {
		return NULL;
}

	struct matrix *res = malloc(sizeof(struct matrix));
	res->rows = m->rows;
	res->cols = m->cols;
	res->data = malloc(res->rows * res->cols * sizeof(double));


	for (size_t r = 0; r < res->rows; ++r) {
		//calcolo la norma a ogni riga
		double n = 0;
		double sum = 0;
		for (size_t c = 0; c < m->cols; ++c) {
			sum += m->data[r* m-> cols + c] * m->data[r * m->cols + c];
		}
		n = sqrt(sum);

		for (size_t c = 0; c < res->cols; ++c) {
			if (n == 0.) {
				res->data[r * res->cols + c] = 0.;
			}
			else {
				res->data[r * res->cols + c] = m->data[r * res->cols + c] / n;
			}
		}
	}


	return res;
}


/*

int main(void) {

	double datam[] = { 0, 2.0, 3.0, 4.0, 5.0, 6.0 };
	struct matrix *r = malloc(sizeof(struct matrix));
	r->rows = 2;
	r->cols = 3;
	r->data = datam;


	struct matrix *f = mat_normalize_rows(r);
	return 0;
}
*/