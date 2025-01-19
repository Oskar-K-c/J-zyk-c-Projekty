#include <stdio.h>
#include "zadanie3.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Podaj nazwê pliku jako argument!\n");
        return 1;
    }

    zlicz_znaki_i_zapisz(argv[1]);
    return 0;
}