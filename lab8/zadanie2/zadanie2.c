#include <stdio.h>
#include <stdlib.h>
#include "zadanie2.h"

#define DANE_FILE "dane.txt"
#define WYNIK_FILE "wynik.txt"

void filtruj_i_zapisz() {
    FILE* file = fopen(DANE_FILE, "r");
    if (file == NULL) {
        printf("Nie mogê otworzyæ pliku %s\n", DANE_FILE);
        return;
    }

    int liczby[5];
    for (int i = 0; i < 5; i++) {
        fscanf(file, "%d", &liczby[i]);
    }

    fclose(file);

    FILE* wynikFile = fopen(WYNIK_FILE, "w");
    if (wynikFile == NULL) {
        printf("Nie mogê otworzyæ pliku %s\n", WYNIK_FILE);
        return;
    }

    for (int i = 0; i < 5; i++) {
        int ostatniaCyfra = abs(liczby[i]) % 10;
        if (ostatniaCyfra == 0 || ostatniaCyfra == 3 || ostatniaCyfra == 8 || ostatniaCyfra == 9) {
            fprintf(wynikFile, "%d\n", liczby[i]);
        }
    }

    fclose(wynikFile);
}