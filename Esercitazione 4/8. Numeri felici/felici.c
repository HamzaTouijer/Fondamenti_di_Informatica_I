#include <stdlib.h> 

int felice(unsigned int num) {
	unsigned int res = 0;
	if (num == 4 || num == 0) {
		return 0;
	}
	if (num == 1) {
		return 1;
	}
	while (num != 0) {
		res += (num % 10) * (num % 10);
		num /= 10;
	}
	return felice(res);
}

int main(void) {
	unsigned int c = felice(7);
	return 0;
}
