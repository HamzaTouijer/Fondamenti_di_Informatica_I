#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>

struct matrix {
    size_t rows, cols;
    double *data;
};

extern void mat_normalize_rows(struct matrix *m);

#endif /*MATRIX_H*/