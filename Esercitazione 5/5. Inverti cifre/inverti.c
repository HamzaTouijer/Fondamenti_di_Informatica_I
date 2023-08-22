#include <math.h>

unsigned int inverti(unsigned int i) {
	unsigned int count = 0, n = i;
	while (n != 0) {
		n /= 10;
		count += 1;
	}
	unsigned int c = 0, sol = 0;
	while (count != 0) {
		c = i % 10;
		i /= 10;
		sol += c * (unsigned int)pow(10, count - 1);
		--count;
	}
	return sol;
}
