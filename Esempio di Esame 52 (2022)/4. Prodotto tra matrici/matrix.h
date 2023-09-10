#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>

struct matrix {
    size_t rows, cols;
    double *data;
};

extern struct matrix *mat_mul(const struct matrix *m1, const struct matrix *m2);

#endif /*MATRIX_H*/