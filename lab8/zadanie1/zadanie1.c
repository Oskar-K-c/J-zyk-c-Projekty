#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "zadanie1.h"

#define PROMIEN_FILE "promienie.txt"
#define WYNIK_FILE "wynik.txt"

void wczytaj_promienie_i_pole() {
    FILE* file = fopen(PROMIEN_FILE, "r");
    if (file == NULL) {
        printf("Nie mogê otworzyæ pliku %s\n", PROMIEN_FILE);
        return;
    }

    double promienie[2], pola[2];
    for (int i = 0; i < 2; i++) {
        fscanf(file, "%lf", &promienie[i]);
        pola[i] = M_PI * promienie[i] * promienie[i]; 
    }

    fclose(file);

    if (pola[0] > pola[1]) {
        double temp = pola[0];
        pola[0] = pola[1];
        pola[1] = temp;
    }

    FILE* wynikFile = fopen(WYNIK_FILE, "w");
    if (wynikFile == NULL) {
        printf("Nie mogê otworzyæ pliku %s\n", WYNIK_FILE);
        return;
    }

    for (int i = 0; i < 2; i++) {
        fprintf(wynikFile, "Pole ko³a: %.2f\n", pola[i]);
    }

    fclose(wynikFile);
}