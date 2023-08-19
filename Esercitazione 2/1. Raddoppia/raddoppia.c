#include <stdlib.h>										
#include <stdint.h>

uint32_t raddoppia(uint32_t *x, size_t n){
	if (x == NULL) {
		return 0;
	}
	for (size_t i = 0; i < n; ++i) {
		x[i] *= 2;
	}
	return *x;
}
