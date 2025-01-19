#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "zadanie4.h"

#define DANE_FILE "dane.txt"
#define WYNIK_FILE "wyniki6.txt"

void policz_plec_i_zapisz() {
    FILE* file = fopen(DANE_FILE, "r");
    if (file == NULL) {
        printf("Nie mogê otworzyæ pliku %s\n", DANE_FILE);
        return;
    }

    char pesel[12];
    int kobiety = 0, mezczyzni = 0;

    while (fscanf(file, "%s", pesel) != EOF) {
        if (pesel[9] % 2 == 0) {
            kobiety++;
        }
        else {
            mezczyzni++;
        }
    }

    fclose(file);

    FILE* wynikFile = fopen(WYNIK_FILE, "a");
    if (wynikFile == NULL) {
        printf("Nie mogê otworzyæ pliku %s\n", WYNIK_FILE);
        return;
    }

    fprintf(wynikFile, "Kobiety: %d, Mezczyzni: %d\n", kobiety, mezczyzni);
    fclose(wynikFile);
}

void policz_november_i_zapisz() {
    FILE* file = fopen(DANE_FILE, "r");
    if (file == NULL) {
        printf("Nie mogê otworzyæ pliku %s\n", DANE_FILE);
        return;
    }

    char pesel[12];
    int listopad = 0;

    while (fscanf(file, "%s", pesel) != EOF) {
        int miesiac = (pesel[2] - '0') * 10 + (pesel[3] - '0');
        if (miesiac == 11) {
            listopad++;
        }
    }

    fclose(file);

    FILE* wynikFile = fopen(WYNIK_FILE, "a");
    if (wynikFile == NULL) {
        printf("Nie mogê otworzyæ pliku %s\n", WYNIK_FILE);
        return;
    }

    fprintf(wynikFile, "Liczba osob urodzonych w listopadzie: %d\n", listopad);
    fclose(wynikFile);
}

void sprawdz_poprawnosc_pesel() {
    FILE* file = fopen(DANE_FILE, "r");
    if (file == NULL) {
        printf("Nie mogê otworzyæ pliku %s\n", DANE_FILE);
        return;
    }

    char pesel[12];
    int sum, i;
    FILE* wynikFile = fopen(WYNIK_FILE, "a");

    while (fscanf(file, "%s", pesel) != EOF) {
        sum = 0;
        int multipliers[] = { 1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1 };
        for (i = 0; i < 11; i++) {
            sum += (pesel[i] - '0') * multipliers[i];
        }
        if (sum % 10 != 0) {
            fprintf(wynikFile, "B³êdny PESEL: %s\n", pesel);
        }
    }

    fclose(file);
    fclose(wynikFile);
}