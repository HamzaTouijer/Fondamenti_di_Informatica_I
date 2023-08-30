#include <string.h>
#include <stdlib.h>
void translate(char *str, const char *from, const char *to) {
	if (str != NULL || from != NULL || to != NULL) {
		if (strlen(from) == strlen(to)) {

			for (size_t i = 0; i < strlen(str); ++i) {
				size_t j = 0;
				while (from[j] != 0) {
					if (str[i] == from[j]) {
						str[i] = to[j];
						break;
					}
					++j;
				}
			}
		}
	}
}


/*
int main(void) {
     char s[] = { "Questa stringa e' da nascondere." };
	translate(s, "abcdefghijklmnopqrstuvwxyz", "zyxwvutsrqponmlkjihgfedcba");

	return 0;
}
*/