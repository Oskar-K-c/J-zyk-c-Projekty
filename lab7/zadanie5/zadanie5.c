#include <stdio.h>
#include <stdlib.h>
#include "liczba.h"

int main() {
    const int n = 10;
    struct liczba_napis tablica_statyczna[n];
    struct liczba_napis* tablica_dynamiczna = (struct liczba_napis*)malloc(n * sizeof(struct liczba_napis));
    struct liczba_napis* tablica_wskaznikow[n];
    int suma_statyczna = 0, suma_dynamiczna = 0, suma_wskaznikow = 0;

    wczytaj_dane(tablica_statyczna, n);
    wczytaj_dane(tablica_dynamiczna, n);
    for (int i = 0; i < n; i++) {
        tablica_wskaznikow[i] = (struct liczba_napis*)malloc(sizeof(struct liczba_napis));
    }
    wczytaj_dane(tablica_wskaznikow, n);

    for (int i = 0; i < n; i++) {
        suma_statyczna += tablica_statyczna[i].liczba;
        suma_dynamiczna += tablica_dynamiczna[i].liczba;
        suma_wskaznikow += tablica_wskaznikow[i]->liczba;
    }

    printf("\nSuma dla tablicy statycznej: %d\n", suma_statyczna);
    printf("Suma dla tablicy dynamicznej: %d\n", suma_dynamiczna);
    printf("Suma dla tablicy wskaznikow: %d\n", suma_wskaznikow);

    free(tablica_dynamiczna);
    for (int i = 0; i < n; i++) {
        free(tablica_wskaznikow[i]);
    }

    return 0;
}