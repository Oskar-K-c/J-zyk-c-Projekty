#include <stdio.h>
#include <stdlib.h>
#include "punktn.h"

int main() {
    const int rozmiar = 2;
    struct punktn tablica1[rozmiar], tablica2[rozmiar];

    for (int i = 0; i < rozmiar; i++) {
        printf("Podaj liczbe wymiarow punktu %d: ", i + 1);
        scanf_s("%d", &tablica1[i].n);

        tablica1[i].wspolrzedne = (double*)malloc(tablica1[i].n * sizeof(double));

        printf("Podaj wspolrzedne punktu %d:\n", i + 1);
        for (int j = 0; j < tablica1[i].n; j++) {
            printf("Wspolrzedna %d: ", j + 1);
            scanf_s("%lf", &tablica1[i].wspolrzedne[j]);
        }
    }

    przepisz_tablice(tablica1, tablica2, rozmiar);

    printf("\nZawartosc tablica2 po przepisaniu:\n");
    for (int i = 0; i < rozmiar; i++) {
        printf("Punkt %d:\n", i + 1);
        printf("Liczba wymiarow: %d\n", tablica2[i].n);
        for (int j = 0; j < tablica2[i].n; j++) {
            printf("Wspolrzedna %d: %.2lf\n", j + 1, tablica2[i].wspolrzedne[j]);
        }
    }

    for (int i = 0; i < rozmiar; i++) {
        free(tablica1[i].wspolrzedne);
        free(tablica2[i].wspolrzedne);
    }

    return 0;
}