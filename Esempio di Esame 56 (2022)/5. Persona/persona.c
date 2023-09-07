#define _CRT_SECURE_NO_WARNINGS
#include "persona.h"

struct persona *leggi_persone(const char *filename, size_t *size) {
	FILE *f = fopen(filename, "r");
	if (f == NULL){
		*size = 0;
		return NULL;
	}

	int c;
	int t = fscanf(f, "%d", &c);	//leggo quanrti elementi ha il file
	if (t == 1) {
		(*size) = c;
	}
	else {							//file vuoto
		fclose(f);
		(*size) = 0;
		return NULL;
	}
	struct persona *res = malloc((*size) * sizeof(struct persona));

	for (size_t i = 0; i < (*size); ++i) {
		int s = fscanf(f, "%d", &res[i].anni);
		if (s != 1) {									//se nel fiile ci sono meno elementi di size 
			(*size) = 0;
			fclose(f);
			free(res);
			return NULL;
		}
		while (1) {
			int c = fgetc(f);
			if (c != ' '&& c!= '\t' && c != ',') {
				fseek(f, -1, SEEK_CUR);
				break;
			}
		}
		fscanf(f, "%[^\n]", res[i].nome);
	}

	fclose(f);
	return res;
	free (res);
}