#include <stdbool.h>

bool crescente(unsigned int x) {
	while (x != 0) {
		unsigned int n1 = x % 10;
		x /= 10;
		unsigned int n2 = x % 10;
		if (n1 > n2) {
			continue;
	}
		else { return false; }
	}
	return true;
}
/*
int main(void) {

	bool n = crescente(759);

	return 0;
}
*/