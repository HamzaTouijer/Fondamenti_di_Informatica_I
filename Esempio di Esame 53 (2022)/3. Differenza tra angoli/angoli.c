#include "angoli.h"
#include <stdlib.h>

struct angolo differenza_angoli(struct angolo a, struct angolo b) {
	struct angolo *res = malloc(sizeof(struct angolo));

	//condizione perchè si possa fare la sottrazione
	if (a.secondi < b.secondi) {
		a.secondi += 60;
		a.primi -= 1;
	}
	if (a.primi < b.primi) {
		a.primi += 60;
		a.gradi -= 1;
	}
	if (a.gradi < b.gradi) {
		res->gradi = 0xFFFF;
		res->primi = 0xFF;
		res->secondi = 0xFF;
		return *res;
		free(res);
	}
	//sottrazione
	res->secondi = a.secondi - b.secondi;
	res->primi = a.primi - b.primi;
	res->gradi = a.gradi - b.gradi;

	return *res;
	free(res);
}