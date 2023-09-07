#include "byteswap.h"


uint32_t byteswap(uint32_t n) {
	
	uint32_t res = 0x0;

	for (int i = 0; i < 4; i++) {
		res += n & 255;			/*ricavo la rapprensentazione binaria di n*/
		n >>= 8;			

		if (i != 3) {
			res <<= 8;
		}
	}

	return res;
}

