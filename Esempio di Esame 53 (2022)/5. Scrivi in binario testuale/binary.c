#define _CRT_SECURE_NO_WARNINGS
#include "binary.h"

void stampa_binario(const char* filename_in, const char* filename_out) {
	FILE *fin = fopen(filename_in, "rb");
	if (fin != NULL) {
		FILE *fout = fopen(filename_out, "w");
		int num = 0;
		int v = fgetc(fin);
		while (v != -1) {
			char *b2 = calloc(8, sizeof(char));
			int i = 7;
			while (i != -1) {
				int a = v % 2;
				v /= 2;
				b2[i] = a;
				--i;
			}
			for(size_t j = 0; j < 8; ++j) {
				fprintf(fout, "%i", b2[j]);
			}
			num += 1;
			if (num == 8) {
				fprintf(fout, "\n");
				num = 0;
			}
			else {
				fprintf(fout, " ");
			}
			 v = fgetc(fin);
		}
		fclose(fout);
	}
	fclose(fin);
}