#include <stdlib.h> 
#include <stdio.h>

int main(int argc, char *argv[]) {
	char *endptr;
	if (argc != 2) {
		return 1;
	}
	int n = strtol(argv[1], &endptr, 10);
	if (*endptr != 0 || n < 0) {
		return 1;
	}
	char true[] = { "true" };
	char false[] = { "false" };
	if (n < 2) {
		printf("%s", false);
		return 0;
	}
	for (int i = 2; i < n; ++i) {
		if (n % i == 0) {
			printf("%s", false);
			return 0;
		}
	}
	printf("%s", true);
	return 0;
}