#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		return 1;
	}
	int val = 0;
	double exp = 0.;
	for (int i = strlen(argv[1])-1; i > -1; --i) {
	
		if (argv[1][i] == '+') {
			val += (1)*pow(3, exp);
		}
		if (argv[1][i] == '-') {
			val += (-1)*pow(3, exp);
		}
		if (argv[1][i] == '0') {
			val += (0)*pow(3, exp);
		}
		if (argv[1][i] != '+' && argv[1][i] != '-' && argv[1][i] != '0') {
			return 1;
		}
		++exp;
	}
	printf("%d\n", val); 
	return 0;
}