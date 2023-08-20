#include <stdlib.h>
#include <string.h>

char *concatena(const char *prima, const char *seconda) {
	char *ris = NULL;
	size_t len1, len2;
	
	if (prima == NULL) {
		len1 = 0;
	}
	else {
		len1 = strlen(prima);
	}
	if (seconda == NULL) {
		len2 = 0;
	}
	else {
		len2 = strlen(seconda);
	}

	ris = malloc(len1 + len2 + 1);
	ris[len1 + len2] = 0;  
	
	for (size_t i = 0; i < len1; ++i) {
		ris[i] = prima[i];
	}
	for (size_t i = 0; i < len2; ++i) {
		ris[i + len1] = seconda[i];
	}
	
	return ris;
}