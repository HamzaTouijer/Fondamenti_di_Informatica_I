#include "stat.h"
#include <stdlib.h> 


double media(double *x, unsigned int n) {
	double m = 0;
	if (n <= 2 || x == NULL) {
		return 0;
	}
	for (size_t i = 0; i < n; ++i) {

		m += x[i];
	}
	m /= n;
	return m;
}

double varianza(double *x, unsigned int n) {

	if (n < 2 || x == NULL){
		return 0;
	}
	double m = 0;
	m = media(x, n);

	double var = 0;
	for (size_t i = 0; i < n; ++i) {
		
		var += (x[i] - m) * (x[i] - m);
	}
	var /= n;

	return var;
}
