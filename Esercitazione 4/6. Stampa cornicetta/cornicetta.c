#include <string.h>
#include <stdio.h>

 void stampa_cornicetta(const char *s) {
	 size_t lung = strlen(s);

	 //prima riga
	 printf("/");
	 for (size_t i = 0; i < lung + 2; ++i) {
		 printf("-");
	 }
	 printf("\\\n");

	 //seconda riga
	 printf("| ");
	 printf("%s",s);
	 printf(" |\n");


	 //terza riga
	 printf("\\");
	 for (size_t i = 0; i < lung + 2; ++i) {
		 printf("-");
	 }
	 printf("/\n");
}
