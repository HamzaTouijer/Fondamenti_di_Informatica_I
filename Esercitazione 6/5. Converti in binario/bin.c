#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	if (argc != 2 || argv[1] == NULL) {
		return 1;
	}
	char* end;
	int n = strtol(argv[1], &end, 10);
	if (*end != 0 || n < 0) {
		return 1;
	}
	if (n == 0) {
		printf("0");
		return 0;
	}
	int cpy = n, len = 0;
	while (cpy != 0) {
		cpy >>= 1;
		++len;
	}
	char* str = calloc(len + 1, sizeof(char));
	int i = 0;
	while (n != 0) {
		str[i] = (n % 2) + '0';
		n >>= 1;
		++i;
	}
	for (int i = len; i-- > 0;) {
		printf("%c", str[i]);
	}
	free(str);
	return 0;
}