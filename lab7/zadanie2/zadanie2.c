#include <stdio.h>
#include "trojkat.h"

int main() {
    struct trojkat t1, t2;

    printf("Podaj dlugosc boku a trojkata t1: ");
    scanf_s("%lf", &t1.a);
    printf("Podaj dlugosc boku b trojkata t1: ");
    scanf_s("%lf", &t1.b);
    printf("Podaj dlugosc boku c trojkata t1: ");
    scanf_s("%lf", &t1.c);

    przepisz_trojkat(t1, &t2);

    printf("Trojkat t1: a=%.2f, b=%.2f, c=%.2f\n", t1.a, t1.b, t1.c);
    printf("Trojkat t2 (po przepisaniu): a=%.2f, b=%.2f, c=%.2f\n", t2.a, t2.b, t2.c);

    return 0;
}