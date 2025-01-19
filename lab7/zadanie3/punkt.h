#ifndef PUNKT_H
#define PUNKT_H

struct punkt {
    double x, y, z;
};

double odleglosc(struct punkt p1, struct punkt p2);
double najmniejsza_odleglosc(struct punkt tab[], int n);

#endif