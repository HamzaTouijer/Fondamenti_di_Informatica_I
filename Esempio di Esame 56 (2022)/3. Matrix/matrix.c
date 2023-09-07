#include "matrix.h"

struct matrix *matrix_quadruplica(const struct matrix *m) {
	if (m == NULL) {
		return NULL;
	}

	struct matrix *res = malloc(sizeof(struct matrix));
	res->rows = m->rows * 2;
	res->cols = m->cols * 2;
	res->data = malloc(res->rows * res->cols * sizeof(double));
	size_t rm = 0;
	for (size_t r = 0; r < res->rows; ++r) {
		if (rm == m->rows) {
			rm = 0;
		}
			size_t c = 0;
			size_t cm = 0;
			while (c < res->cols) {
				if (c == m->cols) {
					cm = 0;
				}
				res->data[r * res->cols + c] = m->data[rm * m->cols + cm];
				++c;
				++cm;
			}
			++rm;
	}
	return res;
	free(res);
}
/*
int main(void) {

	double datam[] = { 1.0, 2.0, 3.0, 4.0};

	struct matrix *r = malloc(sizeof(struct matrix));
	r->rows = 2;
	r->cols = 2;
	r->data = datam;

	struct matrix *f = matrix_quadruplica(r);

	free(r);
	return 0;

}
*/