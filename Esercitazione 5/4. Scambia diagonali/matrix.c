#include "matrix.h"


void swap(double *a, double *b) {
	double tmp = *a;
	*a = *b;
	*b = tmp;
}
struct matrix *scambia_diagonali(const struct matrix *m) {
	if (m == NULL || m->cols != m->rows) {
		return NULL;
	}

	struct matrix *d = malloc(sizeof(struct matrix));
	d->rows = m->cols;
	d->cols = m->rows;
	d->data = calloc(d->rows * d->cols, sizeof(double));

	size_t v = m->cols - 1;
	for (size_t r = 0; r < m->rows; ++r) {
		for (size_t c = 0; c < m->cols; ++c) {
			if (r == c) {
				swap(&m->data[r * m->rows + c], &m->data[v]);
				d->data[r * m->rows + c] = m->data[r * m->rows + c];
				d->data[v] = m->data[v];
			}
			else {
				if((r * m->rows + c) != v) {
				d->data[r * m->rows + c] = m->data[r * m->rows + c];
				}
			}
		}
		v += m->cols - 1;
	}

	return d;
	free(d);
}
/*
int main(void) {

	struct matrix *A = malloc(sizeof(struct matrix));
	double datam[] = { 1.000,  2.000,  3.000,
 4.000,  5.000,  6.000,
 7.000,  8.000,  9.000 };
	A->rows = 3;
	A->cols = 3;
	A->data = datam;

	struct matrix *diag = scambia_diagonali(A);

	return 0;
}
*/