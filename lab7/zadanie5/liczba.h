#ifndef LICZBA_H
#define LICZBA_H

struct liczba_napis {
    int liczba;
    char napis[100];
};

void wczytaj_dane(struct liczba_napis* tab, int n);

#endif