#if !defined UNICO_H
#define UNICO_H

#include <stdlib.h>

struct oggetto {
    char *forma;
    char *colore;
};
struct carta {
    struct oggetto *disegni;
    size_t n;
};

extern const struct oggetto *unico(const struct carta *c);

#endif /*UNICO_H*/