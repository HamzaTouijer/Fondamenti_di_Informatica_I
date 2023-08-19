int primo(unsigned int val) {							/*per prima cosa definisco la funzione che mi calcola se il numero è primo*/
	if (val < 2) {
		return 0;
	}

	for (unsigned int i = 2; i < val; ++i) {
		if (val % i == 0) {
			return 0;
		}
	}
	return 1;
}

unsigned int prossimo_primo(unsigned int x) {

	int i = x + 1;							/*inizio dal numero dopo quello inserito come input*/
	while (!primo(i)) {						/*finchè il numero non è primo aumento di uno*/
		i++;	
	}
	return i;
}
