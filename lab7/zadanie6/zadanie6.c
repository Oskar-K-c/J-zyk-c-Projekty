#include <stdio.h>
#include "punkt10.h"

int main() {
    const int rozmiar = 3;
    struct punkt10 tablica1[rozmiar], tablica2[rozmiar];

    // Wczytanie danych do tablicy 1
    for (int i = 0; i < rozmiar; i++) {
        printf("Podaj wspolrzedne punktu %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("Wspolrzedna %d: ", j + 1);
            scanf_s("%lf", &tablica1[i].wspolrzedne[j]);
        }
    }

    // Przepisanie danych z tablica1 do tablica2
    przepisz_tablice(tablica1, tablica2, rozmiar);

    // Wyœwietlenie zawartoœci tablica2
    printf("\nZawartosc tablica2 po przepisaniu:\n");
    for (int i = 0; i < rozmiar; i++) {
        printf("Punkt %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("Wspolrzedna %d: %.2lf\n", j + 1, tablica2[i].wspolrzedne[j]);
        }
    }

    return 0;
}