
/*#include <stdio.h>

int main() {
    int liczba, max = 0, ilosc = 0;
    double suma = 0;

    printf("Podaj liczby (podaj liczbe ujemna, aby zakonczyc):\n");
    while (1) {
        scanf_s("%d", &liczba);
        if (liczba < 0) break;
        suma += liczba;
        if (liczba > max) max = liczba;
        ilosc++;
    }

    if (count > 0) {
        printf("Suma: %.2f\n", suma);
        printf("Srednia: %.2f\n", suma / ilosc);
        printf("Maksymalna: %d\n", max);
    }
    else {
        printf("Nie podano zadnych liczb.\n");
    }
    return 0;
}

// Zadanie 2
#include <stdio.h>

 int main() {
    int liczba, dodatnie = 0, ujemne = 0, suma_dodatnich = 0, suma_ujemnych = 0;
    printf("Podaj 10 liczb:\n");
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &liczba);
        if (liczba > 0) {
            dodatnie++;
            suma_dodatnich += liczba;
        }
        else if (liczba < 0) {
            ujemne++;
            suma_ujemnych += liczba;
        }
    }
    printf("Ilosc dodatnich: %d, Suma dodatnich: %d\n", dodatnie, suma_dodatnich);
    printf("Ilosc ujemnych: %d, Suma ujemnych: %d\n", ujemne, suma_ujemnych);
    return 0;
}

// Zadanie 3
#include <stdio.h>

int main() {
    int n, liczba, suma = 0;
    printf("Podaj liczbe n (ilosc liczb): ");
    scanf_s("%d", &n);

    printf("Podaj %d liczb:\n", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &liczba);
        if (liczba % 2 == 0) {
            suma += liczba;
        }
    }
    printf("Suma liczb parzystych: %d\n", suma);
    return 0;
}

// Zadanie 4
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, liczba, suma = 0;
    printf("Podaj liczbe n (ilosc losowanych liczb): \n");
    scanf_s("%d", &n);

    srand(time(NULL));
    printf_s("Wylosowane liczby:\n");
    for (int i = 0; i < n; i++) {
        liczba = (rand() % 56) - 10;
        printf("%d \n", liczba);
        if (liczba % 2 == 0) {
            suma += liczba;
        }
    }
    printf("Suma liczb parzystych: %d\n", suma);
    return 0;
}

// Zadanie 5
#include <stdio.h>

int main() {
    int n;
    printf("Podaj liczbe studentow: ");
    scanf_s("%d", &n);

    int punkty, i = 0;
    double suma = 0;
    while (i < n) {
        printf("Podaj liczbe punktow dla studenta %d: ", i + 1);
        scanf_s("%d", &punkty);
        suma += punkty;
        i++;
    }
    printf("Srednia liczba punktow: %.2f\n", suma / n);
    return 0;
}

// Zadanie 6
#include <stdio.h>

int main() {
    printf("1, 2, 3, ..., 99, 100\n");
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
    }

    printf("\n100, 99, ..., 2, 1, 0\n");
    for (int i = 100; i >= 0; i--) {
        printf("%d ", i);
    }

    printf("\n7, 14, 21, ..., 70, 77\n");
    for (int i = 7; i <= 77; i += 7) {
        printf("%d ", i);
    }

    printf("\n20, 18, ..., 2, 0\n");
    for (int i = 20; i >= 0; i -= 2) {
        printf("%d ", i);
    }

    return 0;
}

// Zadanie 7
#include <stdio.h>

int main() {
    int i, j;
    for (i = 9; i >= 0; i--) {
        for (j = 0; j <= i; j++) {
            printf("X");
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 9; i++) {
        for (j = 0; j <= i; j++) {
            printf("X");
        }
        printf("\n");
    }
    printf("\n");
        for (i = 9; i >= 0; i--) {
            for (j = 9; j > i; j--) {
                printf(" ");
            }
            for (j = 0; j <= i; j++) {
                printf("X");
            }
            printf("\n");
        }
        printf("\n");
        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10 - i - 1; j++) {
                printf(" ");
            }
            for (j = 0; j <= i; j++) {
                printf("X");
            }
            for (j = 0; j < i; j++) {
                printf("X");
            }
            printf("\n");
        }
    return 0;
}

*/