#include "bcd.h"

unsigned short bin2bcd(unsigned short val) {

	unsigned short u = (val  /    1) % 10;   //ricavare le unità di un numero.
	unsigned short d = (val  /   10) % 10;	 //ricavare le decine di un numero.
	unsigned short c = (val  /  100) % 10;	 //ricavare le centinaia di un numero.
	unsigned short m = (val  / 1000) % 10;	 //ricavare le migliaia di un numero.
	
	return u + d * 16 + c * 16 * 16 + m * 16 * 16 * 16;
}