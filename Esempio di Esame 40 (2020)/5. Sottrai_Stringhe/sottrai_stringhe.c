#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *sottrai_stringhe(const char *a, const char *b) {
	if (a == NULL || b == NULL) {
		return NULL;
	}
	if (strcmp(a, b) ==0) {
		char *ret = calloc(2, 1);
		strcpy(ret, "0");
		return ret;
	}
	char *res;
	long long unsigned aint = strtoll(a,&res, 10);
	long long unsigned bint = strtoll(b, &res, 10);
	long long unsigned result = aint - bint;

	char *rets = calloc(strlen(a) + 1, 1);
	int r = sprintf(rets, "%llu", result);
	if (r < 1) {
		return NULL;
	}
	return rets;
}
/*
int main(void) {
	const char a[] = {"12345"};
	const char b[] = {"12300"};

	char *r = sottrai_stringhe(a, b);
	return 0;
}
*/