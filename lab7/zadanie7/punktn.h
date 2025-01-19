#ifndef PUNKTN_H
#define PUNKTN_H

struct punktn {
    int n;
    double* wspolrzedne;
};

void przepisz_tablice(struct punktn* tab1, struct punktn* tab2, int rozmiar);

#endif