double radiceq(double a) {
	double t, x = a;
	if (x == 0.)
		return 0.;

	do {
		t = x;																
		 x = 0.5 * (t + a / t);
	} while (x != t);
	return x;
}

double discriminante(double a, double b, double c) {

	double d;
	d = (b * b) - 4 * a * c;

	return d;
}

int soluzioni(double a, double b, double c, double *x1, double *x2) {

	if (discriminante(a, b, c) < 0) {
		return 0;
	}

	else if (discriminante(a, b, c) == 0) {
		
		double a1, b1;

		a1 = (-b + radiceq((b * b) - 4 * a * c) / (2 * a));
		b1 = (-b - radiceq((b * b) - 4 * a * c) / (2 * a));

		*x1 = a1;
		*x2 = b1;

		return 1;
	}
	else if (discriminante(a, b, c) > 0) {

		double a2, b2;
	
		 a2 = (-b + radiceq((b * b) - 4 * a * c) / (2 * a)) / (2 * a);
		 b2 = (-b - radiceq((b * b) - 4 * a * c) / (2 * a)) / (2 * a);

		 *x1 = a2;
		 *x2 = b2;
		
		return 2;
	}
	return 0;
}


