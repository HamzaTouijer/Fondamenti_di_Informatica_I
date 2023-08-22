#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	if (argc != 2 || argv[1] == NULL) {
		return -1;
	}
	char* end;
	int n = strtol(argv[1], &end, 10);
	if (n <= 0) {
		return 0;
	}

	printf("%d", n);
	int count = 0;
	while(1) {
		if (n == 1) {
			count += 1;
			break;
		}
		printf(", ");
		if (n % 2 == 0) {
			n /= 2;
			printf("%d", n);
		}
		else {
			n = 3 * n + 1;
			printf("%d", n);
		}
		++count;
	}

	return count;
}