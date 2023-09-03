#include <stdlib.h>
#include <stdio.h>


void plotter(const char *p) {
	
	size_t pos = 0;

	while (p[pos]!= 0) {
		/*se  è minore di zero*/
		if (p[pos] < 0) {
			for (int i = 0; i < abs(p[pos]); ++i) {
				printf("%c", p[pos + 1]);
			}
			pos += 2;
		}
		/*se  è maggiore di zero*/
		if (p[pos] > 0) {
			while (1) {
				printf("%c", p[pos]);
				break;
			}
			pos += 1;
		}

		/*se  è uguale a zero*/
		if (p[pos] == 0) {
			break;
		}
	}
}

/*

int main(void) {

	char plus[] = { -10,' ','*','\n',-9,' ',-3,'*','\n',-10,' ','*','\n',0 };

	plotter(plus);

	return 0;
}
*/