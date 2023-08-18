unsigned int somma_cifre(unsigned int x) {
	
	unsigned int q, r, S = 0;			
	do {
		q = x / 10;
		r = x - (q * 10);
		S +=r;
		x = q;
	} while (q != 0);

	return S;
}
