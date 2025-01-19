#include <stdio.h>
#include <stdlib.h>
#include "zadanie3.h"

void zlicz_znaki_i_zapisz(char* nazwaPliku) {
    FILE* file = fopen(nazwaPliku, "r");
    if (file == NULL) {
        printf("Nie mogê otworzyæ pliku %s\n", nazwaPliku);
        return;
    }

    int znak;
    int liczbaZnakow = 0;
    while ((znak = fgetc(file)) != EOF) {
        liczbaZnakow++;
    }

    fclose(file);

    file = fopen(nazwaPliku, "r");
    FILE* wynikFile = fopen("wyniki.txt", "w");

    if (file == NULL || wynikFile == NULL) {
        printf("Nie mogê otworzyæ pliku\n");
        return;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        fputc(ch, wynikFile);
    }
    fprintf(wynikFile, "\nLiczba znaków: %d\n", liczbaZnakow);

    fclose(file);
    fclose(wynikFile);
}