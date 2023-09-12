#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("0\n");
		return 0;
	}
	int i = 1, sum = 0; double cifra = 0; 
	while (i < argc) {
		char c = -1;
		int dro = atoi(argv[i]);
		int t = sscanf(argv[i], "%lf%c", &cifra, &c);
		double sub = cifra - (double)dro;
		if (t != 1 || sub != 0.0 || c != -1) {
			++i;
			continue;
		}
		sum += (int)cifra;
			++i;
	}
	printf("%i\n", sum);
	return 0;
}