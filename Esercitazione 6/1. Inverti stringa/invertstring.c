#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

	if (argc != 2 || argv[1] == NULL) {
		return 1;
	}
	else {
		size_t len = strlen(argv[1]);
		for (size_t i = 0; i < len; i++) {
			printf("%c", argv[1][len - 1 - i]);
		}
	}

	return 0;
}
