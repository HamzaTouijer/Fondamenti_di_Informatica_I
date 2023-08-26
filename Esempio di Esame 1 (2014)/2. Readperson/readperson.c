#define _CRT_SECURE_NO_WARNINGS                        
#include <stdio.h>

struct person {
    char name[256];
    unsigned int age;
};

void person_read(FILE *f, struct person *pp) {

    fscanf(f, "%s%u", pp->name, &pp->age);

}

/*
int main(void) {

    FILE *f = fopen("person1.txt", "r");
    struct person person;
    person_read(f, &person);
    fclose(f);

    return 0;
}
*/