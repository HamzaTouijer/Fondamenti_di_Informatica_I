#include<stdlib.h>
#include <math.h>

//funzione fattoriale
double  fatt(double n) {
	double  p = 1.;
	for (size_t i = 2; i <= n; ++i){
		p *= i;
	}
	return p;
}

double calcola_seno(double x) {
	if (x == 0) {
		return 0;
	}
	double s = 0., old = -1.;
	for (size_t n = 0; s != old ; n++) {
		old = s;
		s += (pow(-1.0, n) / fatt(2 * n + 1)) * pow(x, (double)(2 * n + 1));
	}
	return s;
}
