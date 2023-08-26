#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct person {
    char name[256];
    unsigned int age;
};

unsigned int count_teenagers(FILE *f) {
    if (f == NULL)
        return -1;

    struct person pp;
    unsigned int teen = 0;
    int n;
       fscanf(f, "%d", &n);

    for (int i = 0; i < n; ++i){
        fscanf(f, "%s%u", pp.name, &pp.age );
        if ( pp.age >= 13 && pp.age <= 19) {
            teen += 1;
       }
    }
    return teen;
}
/*
int main(void) {

    FILE *fes = fopen("people1.txt", "r");
    unsigned int risultato = count_teenagers(fes);

    return 0;
}
*/