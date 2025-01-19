#ifndef FIGURA_H
#define FIGURA_H

struct figura {
    int typ;
    union {
        struct {
            double a, b, c;
        } trojkat;
        struct {
            double szerokosc, wysokosc;
        } prostokat;
        struct {
            double a, h;
        } rownoleglogbok;
        struct {
            double a, b, h;
        } trapez;
    };
};

double pole(struct figura f);

#endif