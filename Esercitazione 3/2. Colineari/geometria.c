#include "geometria.h"

int colineari(struct punto p1, struct punto p2, struct punto p3) { 


	double r1, r2;
	r1= (p3.x - p2.x) * (p1.y - p2.y);
	r2= (p3.y - p2.y) * (p1.x - p2.x);

	if (r1==r2) {
		return 1;
	}

	return 0;
}


