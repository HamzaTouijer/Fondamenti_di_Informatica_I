#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>


char *trim(const char *s) {

	if (s == NULL) {
		return NULL;
	}

	size_t len = strlen(s);
	int i = 0, start = 0, end = 0;
	while (s[i] != 0) {
		if (s[i] == ' ') {
			--len;
		}
		else {
			start = i;
			break;
		}
		++i;
	}

	if (len == 0) {
		char* sol = calloc(1, sizeof(char));
		sol = "";
		return sol;
	}
	i = strlen(s) - 1;
	while (i > 0) {
		if (s[i] == ' ') {
			--len;
		}
		else {
			end = i;
			break;
		}
		--i;
	}
	char* sol = calloc(sizeof(char) * len + 1, sizeof(char));
	for (i = start; i < end + 1; i++) {
		sol[i - start] = s[i];
	}
	return sol;
	free(sol);
}



/*
int main(void) {

	const char a1[] = " prima";
	const char a2[] = "dopo   ";
	const char a3[] = " a b ";
	const char a4[] = " ";


	char *x;
	x = trim(a2);

	return 0;
}
*/