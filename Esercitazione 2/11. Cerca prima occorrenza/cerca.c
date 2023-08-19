#include "cerca.h"											/*DA FINIRE*/
#include <stdlib.h>
#include <string.h>

int cerca_primo(const char *s, char c) {

	size_t pos = 0;

	while (s[pos]!=0)
	{
		if (s[pos]== c)
		{
			return pos;
			break;
		}
		pos++;
	}
	return -1;
}



	
