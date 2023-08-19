#include <stdlib.h>                     
#include <stdint.h>                     

uint32_t *somme_2a2(uint32_t *vett, size_t size) {        
    if (vett == NULL) {
        return NULL;
    }
    int s = size / 2;
    uint32_t *sol = malloc(s * sizeof(uint32_t));

    int i = 0, j = 0;
    while (i < s) {
        sol[i] = vett[j] + vett[j + 1];
        j += 2;
        ++i;
    }
    return sol;
}

/*
int main(void) {
     size_t n = 5;
     uint32_t *v = malloc(n * sizeof(uint32_t));
     v[0] = 3; v[1] = 87; v[2] = 5; v[3] = 7; v[4] = 12;
     uint32_t *somme = somme_2a2(v, n);                                
     free(v);
     free(somme);
     return 0;
 }
 */