#include <stdio.h>
#include "zadanie1.h"

double obwod(struct trojkat t) {
    return t.a + t.b + t.c;
}

int main() {
    struct trojkat t1;
    printf("Podaj d³ugoœæ boku a: ");
    scanf_s("%lf", &t1.a);
    printf("Podaj d³ugoœæ boku b: ");
    scanf_s("%lf", &t1.b);
    printf("Podaj d³ugoœæ boku c: ");
    scanf_s("%lf", &t1.c);
    double wynik = obwod(t1);
    printf("Obwód trójk¹ta wynosi: %.2f\n", wynik);

    return 0;
}