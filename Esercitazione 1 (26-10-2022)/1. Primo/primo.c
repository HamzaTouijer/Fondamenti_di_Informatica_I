int primo(unsigned int val) {

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
