#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {

	for (int i = 0; argv[1][i] != 0; ++i) {
		if ((argv[1][i] > '9') || (argv[1][i] < '0') || (argv[1][i]!= '+') || (argv[1][i] != ' ')) {
			return 1;
		}
	}

	int n = atoi(argv[1]);

	if (argc == 2 && n != 0 && n > 0 ) {
		for (int i = 1; i <= n; ++i) {
			if (i %3 == 0 && i % 5 != 0) {
				printf("Fizz\n");
			}
			if (i % 3 == 0 && i % 5 == 0) {
				printf("Fizzbuzz\n");
			}
			if (i % 3 != 0 && i % 5 == 0) {
				printf("Buzz\n");
			}
			if (i % 3 != 0 && i % 5 != 0) {
				printf("%d\n", i);
			}
		}
		return 0;
	}
	else {
		return 1;
	}
}