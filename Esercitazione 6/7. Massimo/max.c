#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc == 1) {
		return 1;
	}
	char* end;
	int max = strtol(argv[1], &end, 10);
	if (*end != 0) {
		return 1;
	}

	for(int i = 2; i < argc ;++i){
		int np1 = strtol(argv[i], &end, 10);
		if (*end != 0) {
			return 1;
		}
		if (max < np1) {
			max = np1;
		}
		
	}
	printf("%i", max);
		return 0;
}