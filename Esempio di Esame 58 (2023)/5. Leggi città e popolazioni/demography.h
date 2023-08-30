#if !defined DEMOGRAPHY_H
#define DEMOGRAPHY_H

#include <stdint.h>

struct city {
    char *name; // max length = 255
    uint32_t population;
};

extern struct city *read_cities(const char *filename, uint32_t *n);

#endif /*DEMOGRAPHY_H*/