#define _CRT_SECURE_NO_WARNINGS
#include "imperial.h"
#include <stdio.h>
#include <string.h>

double inch_to_meter(double n) {
	n *= 0.0254;
	return n;
}
double foot_to_meter(double n) {
	n *= 12 * 0.0254;
	return n;
}
double yard_to_meter(double n) {
	n *= 3 *(12 * 0.0254);
	return n;
}
double mile_to_meter(double n) {
	n *= 1760 * (3 *12 * 0.0254);
	return n;
}

double to_meter(const char *imperial_length) {
	double numero;
	char unita[10];
	int p;
	double res = 0;
	while (strcmp(imperial_length, "") != 0) {
		sscanf(imperial_length, "%lf%n", &numero, &p);
		imperial_length += p;
		sscanf(imperial_length, "%s%n", unita, &p);
		if (strcmp(unita, "inch") == 0 || strcmp(unita, "inches") == 0 || strcmp(unita, "in") == 0 || strcmp(unita, "in.") == 0 || strcmp(unita, "\"") == 0) {
			res += inch_to_meter(numero);
		}
		else if (strcmp(unita, "foot") == 0 || strcmp(unita, "feet") == 0 || strcmp(unita, "ft") == 0 || strcmp(unita, "ft.") == 0 || strcmp(unita, "'") == 0) {
			res += foot_to_meter(numero);
		}
		else if (strcmp(unita, "yard") == 0 || strcmp(unita, "yards") == 0 || strcmp(unita, "yd") == 0 || strcmp(unita, "yd.") == 0) {
			res += yard_to_meter(numero);
		}
		else if (strcmp(unita, "mile") == 0 || strcmp(unita, "miles") == 0 || strcmp(unita, "mi") == 0 || strcmp(unita, "mi.") == 0) {
			res += mile_to_meter(numero);
		}
		imperial_length += p;
	}
	return res;
}

int main(void) {
	const char *c1 = { "2 mi 2 yd 2 ft 2 in" };
	double r = to_meter(c1);
	return 0;
}
