//funzione potenza

double potenza(double x, int n) {

	double pot = 1;

	for (int i = 0; i < n; ++i) {
		pot *= x;
	}

	return pot;
}

//funzione fattoriale
double fattoriale(int n)
{
	double fat = 1;

	for (int i = 2; i <= n; ++i)
	{
		fat *= i;
	}
	return fat;
}


double exp(double x) {

	double s = 0;
	double prec = -1;

	for (int n = 0; prec != s; ++n) {
		prec = s;

		s += (potenza(x, n)) / (fattoriale(n));
	}

	return s;
}