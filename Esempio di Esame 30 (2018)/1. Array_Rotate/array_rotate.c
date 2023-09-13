#include <stdlib.h>
#include <string.h>

int *rotate(const int *vec, size_t len, size_t r) {
	if (vec == NULL) {
		return NULL;
	}

	int *ris = calloc(len, sizeof(int));

	for (size_t i = 0; i < len ; ++i) {

		ris[(i + r) % len] = vec[i];
		
	}
	return ris;
}

int main(void) {


	const int a[] = { 1, 2, 3, 4 };
	int *r = rotate(a, 4, 4);
	return 0;
}