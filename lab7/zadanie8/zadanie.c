#include <stdio.h>
#include "zespolone.h"

int main() {
    struct zespolone z1, z2, wynik;

    printf("Podaj czesc rzeczywista i urojona pierwszej liczby zespolonej: ");
    scanf_s("%lf %lf", &z1.re, &z1.im);

    printf("Podaj czesc rzeczywista i urojona drugiej liczby zespolonej: ");
    scanf_s("%lf %lf", &z2.re, &z2.im);

    wynik = dodaj(z1, z2);

    printf("Suma liczb zespolonych: %.2lf + %.2lfi\n", wynik.re, wynik.im);

    return 0;
}