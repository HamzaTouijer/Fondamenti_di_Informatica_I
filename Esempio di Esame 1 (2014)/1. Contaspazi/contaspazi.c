
#include <stdlib.h>

unsigned int conta_spazi(const char* s) {

	unsigned int spazi = 0;
	size_t i = 0;

	while (s[i] != 0) {
		if (s[i] == ' ') {
			spazi += 1;
		}
		i++;
	}

	return spazi;
}

