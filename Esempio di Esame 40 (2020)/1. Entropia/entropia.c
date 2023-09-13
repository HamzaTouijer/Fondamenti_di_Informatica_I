#include <stdlib.h>
#include <math.h>
#include <stdio.h>

double entropia(const double *v, size_t n) {
	if (v == NULL || v == calloc(n,1)){
		return 0;
	}
	double E = 0;
	double s = 0;
	for (size_t i = 0; i <= n-1; ++i) {
		if (v[i] != 0.000000) {
			s += v[i] * log2(v[i]);
		}
	}
	if (s < 0) {
		E = -1 * s;
	}
	return E;
}           