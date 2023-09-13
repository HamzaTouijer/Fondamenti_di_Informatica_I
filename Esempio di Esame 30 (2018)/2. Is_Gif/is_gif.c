#define _CRT_SECURE_NO_WARNINGS	
#include "is_gif.h" 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool is_gif(const char *filename) {

	FILE *f = fopen(filename, "rb");
	if (f != NULL) {
		 char *p = malloc(6 * sizeof(char));
		const char g1[] = { "GIF89a" };
		const char g2[] = { "GIF87a" };

		fread(p, sizeof(char), 6, f);
		if (strncmp(p, g1, 6) == 0 || strncmp(p, g2, 6) == 0) {
			free(p);
			return true;
		}
		else {
			free(p);
			return false;
		}
	}
	else{
		return false;
	}

	fclose(f);
}

