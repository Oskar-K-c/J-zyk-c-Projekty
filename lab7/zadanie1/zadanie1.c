#include <stdio.h>
#include "zadanie1.h"

double obwod(struct trojkat t) {
    return t.a + t.b + t.c;
}

int main() {
    struct trojkat t1;
    printf("Podaj d�ugo�� boku a: ");
    scanf_s("%lf", &t1.a);
    printf("Podaj d�ugo�� boku b: ");
    scanf_s("%lf", &t1.b);
    printf("Podaj d�ugo�� boku c: ");
    scanf_s("%lf", &t1.c);
    double wynik = obwod(t1);
    printf("Obw�d tr�jk�ta wynosi: %.2f\n", wynik);

    return 0;
}