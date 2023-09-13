#include "matrix.h"
#include <string.h>

struct matrix *mat_scale(const struct matrix *m, double x) {
	if (m == NULL) {
		return NULL;
	}

	struct matrix *ris = malloc(sizeof(struct matrix));

	ris->rows = m->rows;
	ris->cols = m->cols;
	ris->data = malloc(ris->rows * ris->cols * sizeof(double));

	for (size_t r = 0; r < m->rows; ++r) {
		for (size_t c = 0; c < m->cols; ++c) {
			ris->data[r * m->cols + c] = x* m->data[r * m->cols + c];
		}
	}

	return ris;
	free(ris);
}



int main(void) {

	struct matrix *r;

	double datam[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };
	r->rows = 2;
	r->cols = 3;
	r->data = datam;

	struct matrix *g = mat_scale(r, 7);

	return 0;
}
