#include "punkt.h"

void przepisz_tablice(struct punkt tab1[], struct punkt tab2[], int n) {
    for (int i = 0; i < n; i++) {
        tab2[i] = tab1[i];
    }
}