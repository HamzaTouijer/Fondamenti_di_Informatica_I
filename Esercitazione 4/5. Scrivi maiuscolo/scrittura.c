#define _CRT_SECURE_NO_WARNINGS
#include "scrittura.h"
#include <stdbool.h>		
#include <ctype.h>										

int scrivimaiuscolo(const char *filename) {

	FILE *f = fopen(filename, "r");
	int res = 0;
	if (f) {
		while (true) {
			//Leggi
			char c;
			int res = fscanf(f, "%c", &c);
			//Controlla
			if (res != 1) {
				break;
			}
			//Usa

			c = toupper(c);

			printf ("%c", c);

		}

		fclose(f);
	}
	return res;
}

