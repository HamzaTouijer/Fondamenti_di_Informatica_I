#include <stdlib.h>
#include <string.h>

size_t conta_parole(const char *s) {
	size_t count = 0;

	for (int i = 0; s[i] != 0;) {
		if (s[i] != ' ') {
			while (s[i] != ' ') {
				if (s[i] == 0) {
					break;
				}
				++i;
			}
			++count;
		}
		else {
			++i;
		}
	}
	return count;
 }