#include "punkt10.h"

void przepisz_tablice(struct punkt10* tab1, struct punkt10* tab2, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j < 10; j++) {
            tab2[i].wspolrzedne[j] = tab1[i].wspolrzedne[j];
        }
    }
}