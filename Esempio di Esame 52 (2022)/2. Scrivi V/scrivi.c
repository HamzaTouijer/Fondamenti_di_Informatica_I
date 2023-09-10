#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h> 
#include <stdio.h>

void scrivi_v(FILE *f, uint8_t n) {
	size_t num = n;
	for (size_t i = 0; i < n; ++i) {
		
		size_t j = 0;
		while (j < i) {
			fprintf(f, " ");
			++j;
		}
		fprintf(f, "\\");
		size_t space = num * 2 - 2;
		size_t s = 0;
		while (s < space) {
			fprintf(f, " ");
			++s;
		}
		fprintf(f, "/\n");
		num -= 1;
	}
}

