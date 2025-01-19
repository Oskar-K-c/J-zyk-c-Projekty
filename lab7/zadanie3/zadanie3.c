#include <stdio.h>
#include "punkt.h"

int main() {
    const int n = 5;
    struct punkt tab[n];

    for (int i = 0; i < n; i++) {
        printf("Podaj wspolrzedne punktu %d (x y z): ", i + 1);
        scanf_s("%lf %lf %lf", &tab[i].x, &tab[i].y, &tab[i].z);
    }

    double min_odg = najmniejsza_odleglosc(tab, n);
    printf("Najmniejsza odleglosc pomiedzy punktami wynosi %.2f\n", min_odg);

    return 0;
}