#include <stdlib.h>


char* converti(unsigned int n) {
	if (n == 0) {
		return NULL;
	}
	int size = 0;
	unsigned int copia_n = n;

	while (n > 0) {
		n /= 10;
		size++;
	}
	n = copia_n;

	char *risultato = calloc(size,  sizeof(char) + 1);
	risultato[size] = 0;
	for (int i = size - 1; i >= 0; i--) {
		risultato[i] = n % 10 + '0';
		n /= 10;
	}
	return risultato;
	free(risultato);
}