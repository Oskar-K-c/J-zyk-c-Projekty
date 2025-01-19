#include "trojkat.h"

void przepisz_trojkat(struct trojkat troj1, struct trojkat* troj2) {
    troj2->a = troj1.a;
    troj2->b = troj1.b;
    troj2->c = troj1.c;
}