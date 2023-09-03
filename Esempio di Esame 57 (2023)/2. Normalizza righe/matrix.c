#include "matrix.h"
#include <math.h>

void mat_normalize_rows(struct matrix *m) {
	if (m == NULL) {
		return;
	}
	else {
		for (size_t r = 0; r < m->rows; ++r) {
			//calcolo la norma a ogni riga
			double n = 0;
			double sum = 0;
			for (size_t c = 0; c < m->cols; ++c) {
				sum += m->data[r * m->cols + c] * m->data[r * m->cols + c];
			}
			n = sqrt(sum);

			for (size_t c = 0; c < m->cols; ++c) {
				if (n == 0.) {
					m->data[r * m->cols + c] = 0.;
				}
				else {
					m->data[r * m->cols + c] = m->data[r * m->cols + c] / n;
				}
			}
		}
	}
}