#include "stat.h"
#include <stdlib.h>


double media(double *x, unsigned int n) {
	double m = 0;
	if (n == 0 || x == NULL) {
		return 0;
	}
	for (size_t i = 0; i < n; ++i) {
		
		m += x[i];
	}
	m /= n;
	return m;
}
