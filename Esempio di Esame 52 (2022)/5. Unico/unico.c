#include "unico.h"
//su olj non funziona
const struct oggetto *unico(const struct carta *c) {
   
    struct oggetto *unico = malloc(sizeof(struct oggetto));
    unico->colore = malloc(sizeof(char));
    unico->forma  = malloc(sizeof(char));
    //controllo forma
    char *unico_forma;
    char *unico_colore;
    for (size_t i = 0; i < c->n; ++i) {
        unico_forma = c->disegni[i].forma;
        size_t j = 0;
        while (j < c->n) {
            if (c->disegni[j].forma == unico_forma && j != i) {
                break;
            }
            ++j;
        }
        if (i == c->n-1) {
            break;
        }
        if (j == c->n) {
            *unico = c->disegni[i];
            return unico;
            free(unico->colore);
            free(unico->forma);
            free(unico);
        }
    }
    
    for (size_t i = 0; i < c->n; ++i) {
        unico_colore = c->disegni[i].colore;
        size_t j = 0;
        while (j < c->n) {
            if (c->disegni[j].colore == unico_colore && j != i) {
                break;
            }
            ++j;
        }
        if (j == c->n) {
            *unico = c->disegni[i];
            break;
        }
    }
    return unico;
    free(unico->colore);
    free(unico->forma);
    free(unico);
}