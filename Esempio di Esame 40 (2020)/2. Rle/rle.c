#define _CRT_SECURE_NO_WARNINGS
#include "rle.h"
#include <stdlib.h>
#include <stdint.h>

bool easy_rle_decode(const char* nomefilein, const char* nomefileout) {
	FILE *fin = fopen(nomefilein, "rb");
	FILE *fout = fopen(nomefileout, "wb");
	if (fin == NULL || fout == NULL) {
		fclose(fin);
		fclose(fout);
		return false;
	}

	while (1) {
		int n = fgetc(fin);
		if (n == EOF) {
			break;
		}
		char c = fgetc(fin);
		while (n + 1 != 0) {
			fprintf(fout, "%c", c);
			--n;
		}
	}
	fclose(fin);
	fclose(fout);
	return true;
}

