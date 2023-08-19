#include <stdlib.h>

unsigned int conta_spazi(const char *s ){
	unsigned int space = 0;
	int pos = 0;

	while (s[pos] != 0) {
		if (s[pos] == ' ') {
			space += 1;
		}
		pos++;
	}
	return space;
}