#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int *read_gruppi(const char *filename, size_t *ngruppi) {
	FILE *f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	//conto elementi
	int test = 0,i = 0, j = 0;
	while (1) {
		if (fscanf(f, "%i", &test) != 1) {
			break;
		}
		++i;
	}
	int * mem = calloc(i, sizeof(int) + 1);
	rewind(f);
	while (1) {
		if (fscanf(f, "%i", &mem[j]) != 1) {
			break;
		}
		++j;
	}
	//conto gruppi
	rewind(f);
	int c = 0, last = 0;
	size_t ng = 0;
	for (; (c = fgetc(f)) != EOF; last = c) {
		if (c == '\n' && last == '\n') {
			++ng;
		}
	}
	(*ngruppi) = ng+1;
	int * res = calloc(*ngruppi, sizeof(int) + 1);
	//devo sapere quanti elementi ha ogni gruppo
	rewind(f);
	int elem = 0, k = 0, l = 0;

	for(; (c = fgetc(f))>= -1; last = c){
		if ((c == '\n' && last == '\n')||(c == -1)) {
			if (c == -1) {
				elem += mem[l];
				++l;
				res[k] = elem;
				break;
			}
			res[k] = elem;
			++k;
			elem = 0;
			continue;
		}
		if (c == '\n') {
			elem += mem[l];
			++l;
		}
		if (c == -1) {
			break;
		}
	}

	return res;
	fclose(f);
	free(mem);
	free(res);
}