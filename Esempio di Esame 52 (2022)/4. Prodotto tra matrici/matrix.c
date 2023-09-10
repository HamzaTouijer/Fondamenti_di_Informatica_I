#include "matrix.h"

struct matrix *mat_mul(const struct matrix *m1, const struct matrix *m2) {
	//condizioni da verificare
	if (m1 == NULL || m2 == NULL) {
		return NULL;
	}
	if (m1->cols != m2->rows) {
		return NULL;
	}
	//allocazione delle memoria per la nuova matrice
	struct matrix *res = calloc(1, sizeof(struct matrix));

	res->rows = m1->rows;
	res->cols = m2->cols;
	res->data = calloc(res->rows * res->cols,  sizeof(double));

	double prod = 0;
//prodotto tra le due matrici
	for (size_t r = 0; r < res->rows; ++r) {
		for (size_t c = 0; c < res->cols; ++c) {

			for (size_t c1 = 0 ; c1 < m1->cols; ++c1) {
				for (size_t r2 = 0; r2 < m2->rows; ++r2) {

				double prod = 0;
				size_t j = 0;
				
				for (size_t i = 0; i < m1->cols; ++i) {
					prod += m1->data[r * m1->cols + c1 + i] * m2->data[r2 * m2->cols + c + j];
					j += m2->cols;
				}
						res->data[r * res->cols + c] = prod;
					break;
				}
				break;
			}
		}
	}

	return res;

}
/*
int main(void) {

	struct matrix a1;
	struct matrix a2;

	double data_a1[] = { 4.0, 5.0, 6.0 };
	a1.rows = 1;
	a1.cols = 8;
	a1.data = data_a1;

	double data_a2[] = { 1.0, 2.0, 3.0 };
	a2.rows = 3;
	a2.cols = 1;
	a2.data = data_a2;


	struct matrix *r = mat_mul(&a1, &a2);

	return 0;
}
*/