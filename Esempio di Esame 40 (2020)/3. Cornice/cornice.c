#include <stdint.h>
#include <string.h>
#include <stdio.h>

void spazi(size_t n) {
	for (size_t i = 0; i < n; i++) {
		printf(" ");
	}
}
extern void cornice(uint8_t h, uint8_t w) {
	if (h == 0 || w == 0) {
		return;
	}
	//sup
	for (size_t i = 0; i < (size_t)w - 1; i++) {
		printf("/-\\|");
	}
	printf("/-\\\n");
	for (size_t height = 0; height < (size_t)h; height++) {
		for (size_t intrep = 0; intrep < 4; intrep++) {
			switch (intrep) {
			case 0:
				printf("/");
				spazi(4 * (size_t)w - 3);
				printf("\\\n");
				break;
			case 1:
				printf("|");
				spazi(4 * (size_t)w - 3);
				printf("|\n");
				break;
			case 2:
				printf("\\");
				spazi(4 * (size_t)w - 3);
				printf("/\n");
				break;
			case 3:
				if (height != (size_t)h - 1) {
					printf("-");
					spazi(4 * (size_t)w - 3);
					printf("-\n");
				}
				break;
			}
		}
	}
	//inf
	for (size_t i = 0; i < (size_t)w - 1; i++) {
		printf("\\-/|");
	}
	printf("\\-/");
}

