#if !defined RATIONALAL_H
#define RATIONAL_H

#include <stdlib.h>

struct rational {
    int num;
    unsigned int den;
};

extern struct rational *rational_read(const char *filename, size_t *size);

#endif /*RATIONSL_H*/