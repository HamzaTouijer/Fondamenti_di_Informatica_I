#include <stdbool.h>

bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned int c) {
	
	unsigned int as = a*a;
	unsigned int bs = b*b;
	unsigned int cs = c*c;

	if(as+bs==cs || as+cs==bs ||cs+bs==as){

		return true;
	}

	return false;
	
}
