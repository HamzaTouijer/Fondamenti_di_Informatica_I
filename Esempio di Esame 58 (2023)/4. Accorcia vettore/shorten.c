#include <stdlib.h>
#include <string.h>

size_t shorten(int *v, size_t n, int max) {
	if (v == NULL) {
		return 0;
	}
	size_t len = n;

	for (size_t i = 0; i < n; ++i) {
		if (v[i] > max) {
			len -= 1;
			size_t j = i;
			while (j < n) {
				v[j] = v[j + 1];
				++j;
			}
			if (v[i] > max) {
				i -= 1;
			}
		}
	}
	

	return len;
}

int main(void) {

	int x[] = { 5, 1, 7, 9, 11, 3, 8, 2, 1, 3, 5 };
	size_t new_size = shorten(x, 11, 7);

	return 0;
}
