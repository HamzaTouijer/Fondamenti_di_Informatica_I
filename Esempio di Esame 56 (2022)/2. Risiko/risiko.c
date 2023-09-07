#include "risiko.h"
#include <stdlib.h>


char minimo(char a, char b) {
	if ((int)a > (int)b) {
		return b;
	}
	return a;
}


void confronta_lanci(const struct lancio *attacco, const struct lancio *difesa, char *perse_attacco, char *perse_difesa)
{
	if (attacco == NULL || difesa == NULL || perse_difesa == NULL || perse_attacco == NULL) {
		return;
	}
	*perse_attacco = (char)0;
	*perse_difesa = (char)0;

	for (char i = 0; i < minimo(attacco->n_dadi,difesa->n_dadi); ++i) {
		if ((int)attacco->valori[i] > (int)difesa->valori[i]) {
			*perse_difesa+=1;
		}
		else
		{
			*perse_attacco+=1;
		}
	}
}