#include <stdio.h>
#include "figura.h"

int main() {
    struct figura f1, f2, f3, f4;

    f1.typ = 1;
    printf("Podaj boki trojkata:\n");
    scanf_s("%lf %lf %lf", &f1.trojkat.a, &f1.trojkat.b, &f1.trojkat.c);

    f2.typ = 2;
    printf("Podaj szerokosc i wysokosc prostokata:\n");
    scanf_s("%lf %lf", &f2.prostokat.szerokosc, &f2.prostokat.wysokosc);

    f3.typ = 3;
    printf("Podaj bok i wysokosc rownoleglogboku:\n");
    scanf_s("%lf %lf", &f3.rownoleglogbok.a, &f3.rownoleglogbok.h);

    f4.typ = 4;
    printf("Podaj podstawy a i b oraz wysokosc trapezu:\n");
    scanf_s("%lf %lf %lf", &f4.trapez.a, &f4.trapez.b, &f4.trapez.h);

    printf("Pole trojkata: %.2lf\n", pole(f1));
    printf("Pole prostokata: %.2lf\n", pole(f2));
    printf("Pole rownoleglogboku: %.2lf\n", pole(f3));
    printf("Pole trapezu: %.2lf\n", pole(f4));

    return 0;
}