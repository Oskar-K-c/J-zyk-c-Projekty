// Zadanie 1
/*#include <stdio.h>

int main() {
    int tablica[10];
    for (int i = 0; i < 10; i++) {
        tablica[i] = (i + 1) * 3;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", tablica[i]);
    }

    return 0;
}

// Zadanie 2
#include <stdio.h>

int main() {
    int tablica[10];
    for (int i = 0; i < 10; i++) {
        tablica[i] = (i + 1) * 3;
    }
    for (int i = 1; i < 10; i += 2) {
        printf("%d ", tablica[i]);
    }

    return 0;
}

// Zadanie 3
#include <stdio.h>

int main() {
    int n;
    printf("Podaj rozmiar tablicy: ");
    scanf_s("%d", &n);

    int tablica[n];
    int a;
    printf("Podaj wartoœæ pocz¹tkow¹ (a): ");
    scanf_s("%d", &a);
    for (int i = n - 1; i >= 0; i--) {
        tablica[i] = a;
        a += 5;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", tablica[i]);
    }

    return 0;
}

// Zadanie 4
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Podaj rozmiar tablicy: ");
    scanf_s("%d", &n);

    int* tablica = (int*)malloc(n * sizeof(int));
    if (tablica == NULL) {
        printf("Blad przydzielania pamiêci!\n");
        return 1;
    }
    srand(time(0));  

    for (int i = 0; i < n; i++) {
        tablica[i] = (rand() % 74) - 23; 
    }
    int min = tablica[0];
    for (int i = 1; i < n; i++) {
        if (tablica[i] < min) {
            min = tablica[i];
        }
    }

    printf("Minimalna wartosc w tablicy: %d\n", min);
    free(tablica);

    return 0;
}

// Zadanie 5
#include <stdio.h>

int main() {
    int tablica[10];

    printf("Podaj pierwsza wartosc: ");
    scanf_s("%d", &tablica[0]);
    printf("Podaj druga wartosc: ");
    scanf_s("%d", &tablica[1]);

    for (int i = 2; i < 10; i++) {
        tablica[i] = tablica[i - 1] + tablica[i - 2];
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", tablica[i]);
    }

    return 0;
}

// Zadanie 6
#include <stdio.h>

int main() {
    int tablica[20];

    printf("Podaj pierwsza polowe tablicy (10 elementow):\n");
    for (int i = 0; i < 10; i++) {
        printf("tablica[%d] = ", i);
        scanf_s("%d", &tablica[i]);
    }
    for (int i = 10; i < 20; i++) {
        tablica[i] = tablica[i - 10];
    }
    for (int i = 0; i < 20; i++) {
        printf("%d ", tablica[i]);
    }

    return 0;
}

// Zadanie 7
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Podaj rozmiar macierzy (n x n): ");
    scanf_s("%d", &n);

    int** macierz = (int**)malloc(n * sizeof(int*));
    if (macierz == NULL) {
        printf("Blad przydzielania pamieci!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        macierz[i] = (int*)malloc(n * sizeof(int));
        if (macierz[i] == NULL) {
            printf("Blad przydzielania pamiêci dla wiersza %d!\n", i);
            return 1;
        }
    }
    int suma = 0;
    printf("Podaj elementy macierzy:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("macierz[%d][%d] = ", i, j);
            scanf_s("%d", &macierz[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        suma += macierz[i][i];
    }
    printf("Suma elementow przekatnej glownej: %d\n", suma);

    for (int i = 0; i < n; i++) {
        free(macierz[i]);
    }
    free(macierz);

    return 0;
}

// Zadanie 8
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Podaj wymiary macierzy (n x m): ");
    scanf_s("%d %d", &n, &m);
    int** macierz1 = (int**)malloc(n * sizeof(int*));
    int** macierz2 = (int**)malloc(n * sizeof(int*));
    int** suma = (int**)malloc(n * sizeof(int*));
    if (macierz1 == NULL || macierz2 == NULL || suma == NULL) {
        printf("Blad przydzielania pamieci!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        macierz1[i] = (int*)malloc(m * sizeof(int));
        macierz2[i] = (int*)malloc(m * sizeof(int));
        suma[i] = (int*)malloc(m * sizeof(int));

        if (macierz1[i] == NULL || macierz2[i] == NULL || suma[i] == NULL) {
            printf("Blad przydzielania pamieci dla wiersza %d!\n", i);
            return 1;
        }
    }
    printf("Podaj elementy pierwszej macierzy:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("macierz1[%d][%d] = ", i, j);
            scanf_s("%d", &macierz1[i][j]);
        }
    }
    printf("Podaj elementy drugiej macierzy:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("macierz2[%d][%d] = ", i, j);
            scanf_s("%d", &macierz2[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            suma[i][j] = macierz1[i][j] + macierz2[i][j];
        }
    }
    printf("Wynik dodawania macierzy:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", suma[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        free(macierz1[i]);
        free(macierz2[i]);
        free(suma[i]);
    }
    free(macierz1);
    free(macierz2);
    free(suma);

    return 0;
}*/