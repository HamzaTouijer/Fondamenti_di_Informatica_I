#if !defined PERSONA_H
#define PERSONA_H

#include <stdlib.h>
#include <stdio.h>

struct persona {
    int anni;
    char nome[50];
};

extern struct persona *leggi_persone(const char *filename, size_t *size);

#endif /*PERSONA_H*/