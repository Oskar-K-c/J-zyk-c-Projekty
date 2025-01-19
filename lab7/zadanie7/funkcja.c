#include <stdio.h>
#include <stdlib.h>
#include "punktn.h"

void przepisz_tablice(struct punktn* tab1, struct punktn* tab2, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        tab2[i].n = tab1[i].n;
        tab2[i].wspolrzedne = (double*)malloc(tab1[i].n * sizeof(double)); 
        for (int j = 0; j < tab1[i].n; j++) {
            tab2[i].wspolrzedne[j] = tab1[i].wspolrzedne[j]; 
    }
}