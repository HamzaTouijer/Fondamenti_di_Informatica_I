#include "punto.h"
#include <math.h>

struct punto_pol cartesiano2polare(const struct punto_cart *p) {
   
    struct punto_pol punto;
    
    punto.r = sqrt((p->x) * (p->x) + (p->y) * (p->y));
    punto.t = atan2(p->y, p->x);
    
    return punto;
}

struct punto_cart polare2cartesiano(const struct punto_pol *p) {

    
    struct punto_cart punto2;

    punto2.x = p->r * cos(p->t);
    punto2.y = p->r * sin(p->t);

    return punto2;
}
