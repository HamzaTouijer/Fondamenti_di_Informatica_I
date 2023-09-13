#include "path_split.h"
#include <stdlib.h>
#include <string.h>

void path_split(const char *str, char **path, char **filename) {
	if (str == NULL) {
		*path = NULL;
		*filename = NULL;
	}
	size_t save = 0;
	for(size_t i = 0; str[i] != 0; ++i) {
		if (str[i] == '\\') {
			save = i;
		}
	}
	
	char *sp = calloc(save + 1, 1);
	for (size_t p = 0; p <= save; ++p) {
		sp[p] = str[p];
	}
	*path = sp;

	int k = save;
	int file = 0;
	while (str[k] != 0) {
		file += 1;
		++k;
	}
	char *sf = calloc(file + 1, 1);
	int s = save + 1;
	for (size_t f = 0 ; str[s] != 0 ; ++f) {
		sf[f] = str[s];
		++s;
	}
	*filename = sf;
}