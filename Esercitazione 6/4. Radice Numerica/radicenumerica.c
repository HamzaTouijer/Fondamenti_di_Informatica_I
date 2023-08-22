#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
char *end;
	if (argc != 2) {
		return 1;
	}
int n = strtol(argv[1], &end, 10);
	if (*end !=0 || n < 0) {
		return 1;
	}
	
int somma = 0;
	while(n !=0){
		int cifra = n % 10;	
		somma += cifra;
		n /= 10;
	}
	int sommaf = 0;
	int ver = somma;
	while (1) {
		if (ver >= 10) {
			while (ver != 0) {
				int cifra2 = ver % 10;
				sommaf += cifra2;
				ver /= 10;
			}
			ver = sommaf;
		}
		if (ver < 10 && ver >= 0) {
			break;
		}
		sommaf = 0;
	}
	printf("%d", sommaf);
	return 0;
}