#include "frequenza.h"
//non funziona su olj
struct oggetto *piu_frequente(const struct carta *c) {
    
    struct oggetto *res = calloc(1, sizeof(struct oggetto));
    res->forma = malloc((sizeof(char)));
    res->colorenumero = malloc((sizeof(char)));
    int old = 0, cnt = 1, max = 0;
    char *shape;
    char *color;
    for (size_t i = 0; i < c->n; ++i) {
        shape = c->disegni[i].forma;
        color = c->disegni[i].colorenumero;
        if (shape != res->forma && color != res->colorenumero) {
            for (size_t j = 0; j < c->n; ++j) {
                if (c->disegni[j].forma == shape && color == c->disegni[j].colorenumero && j != i) {
                    cnt += 1;
                }
            }
            if (cnt > max) {
                res->forma = c->disegni[i].forma;
                res->colorenumero = c->disegni[i].colorenumero;
                max = cnt;
            }
            old = cnt;
            cnt = 1;
        }
    }
        return res;
}