void encrypt(char *s, unsigned int n) {

	for (unsigned int i = 0; i < n; i++) {
		s[i] ^= 0xAA;
	}
}