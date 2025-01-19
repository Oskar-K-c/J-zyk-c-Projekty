#include <stdio.h>
#include "liczba.h"

void wczytaj_dane(struct liczba_napis* tab, int n) {
    for (int i = 0; i < n; i++) {
        printf("Element %d:\n", i + 1);
        printf("Podaj liczbe: ");
        scanf_s("%d", &tab[i].liczba);
        printf("Podaj napis: ");
        scanf_s("%s", tab[i].napis);
    }
}