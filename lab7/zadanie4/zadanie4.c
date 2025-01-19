#include <stdio.h>
#include "punkt.h"

int main() {
    const int n = 5;
    struct punkt tab1[n], tab2[n];

    for (int i = 0; i < n; i++) {
        printf("Podaj wspolrzedne punktu %d (x y z) do tablicy 1: ", i + 1);
        scanf_s("%lf %lf %lf", &tab1[i].x, &tab1[i].y, &tab1[i].z);
    }

    przepisz_tablice(tab1, tab2, n);

    printf("Tablica 2 po przepisaniu:\n");
    for (int i = 0; i < n; i++) {
        printf("Punkt %d: (%.2f, %.2f, %.2f)\n", i + 1, tab2[i].x, tab2[i].y, tab2[i].z);
    }

    return 0;
}