
unsigned int inverti(unsigned int i) {

	unsigned int rev = 0;
	unsigned int resto;

	while (i != 0) {
		resto = i % 10;
		rev = rev *  10 + resto;
		i /= 10;
	}

	return rev;
}
