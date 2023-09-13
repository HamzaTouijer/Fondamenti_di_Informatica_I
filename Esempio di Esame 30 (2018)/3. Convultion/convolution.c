#include <stdlib.h>

int *convolution3(const int *v, size_t lenv, const int k[3]) {

	if (v == NULL || k == NULL) {
		return NULL;
	}

	int *ris = malloc(lenv * sizeof(int));

	int elem = 0;
	

	size_t n = 0;
	while (n < lenv) {
		int s = 0;
		for (size_t m = 0; m <= 2; ++m) {
			int i = n + 1 - m;
			if (i < 0 || i > (int)lenv - 1) {
				 elem = 0 * k[m];
			}
			else {
				 elem = v[n + 1 - m] * k[m];
			}
			s += elem;
		}
		ris[n] = s;
	++n;
	}
		
	return ris;
	free(ris);
}


/*
int main(void) {

	const int v[] = { 1, 2, 3, 4, 3, 2, 1 };
	const int k[] = { 2, -1, 1 };

	int *r = convolution3(v, 7, k);	
	
	return 0;
}
*/