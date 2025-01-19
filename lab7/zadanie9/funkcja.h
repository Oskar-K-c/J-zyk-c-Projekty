#include <math.h>
#include "figura.h"

double pole(struct figura f) {
    switch (f.typ) {
    case 1:
    {
        double p = (f.trojkat.a + f.trojkat.b + f.trojkat.c) / 2;
        return sqrt(p * (p - f.trojkat.a) * (p - f.trojkat.b) * (p - f.trojkat.c));
    }
    case 2: 
        return f.prostokat.szerokosc * f.prostokat.wysokosc;
    case 3: 
        return f.rownoleglogbok.a * f.rownoleglogbok.h;
    case 4: 
        return (f.trapez.a + f.trapez.b) * f.trapez.h / 2;
    default:
        return 0;
    }
}