#if !defined DATASET_H
#define DATASET_H

#include <stdlib.h>

struct row {
    char *filename; // max 255 characters
    char prognosis; // M or S
};
struct dataset {
    struct row *data;
    size_t nrows;
};

extern struct dataset *dataset_load(const char *filename);

#endif /*DATASET_H*/