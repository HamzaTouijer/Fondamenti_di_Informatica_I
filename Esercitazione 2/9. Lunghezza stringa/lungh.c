#include <stdlib.h>

size_t lungh(const char *str) {

    size_t pos = 0;
    size_t l = 0;

    while (str[pos] != 0) {
        l += 1;
        pos++;
    }
    return l;
}