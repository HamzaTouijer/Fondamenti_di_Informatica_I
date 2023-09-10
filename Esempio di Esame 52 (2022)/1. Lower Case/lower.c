#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
int main(int argc, char *argv[]) {
	if (argc != 2) {
		return 1;
	}
	FILE *f = fopen(argv[1], "r");

	while (1) {
		int r = fgetc(f);
		if (r == EOF) {
			break;
		}
		fprintf(stdout, "%c", tolower(r));
	}

	return 0;
	fclose(f);
}