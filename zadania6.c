//Zadanie 1
/*
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int* ptr_a = &a;
    int* ptr_b = &b;

    printf("Adres zmiennej 'a': %p\n", (void*)&a);
    printf("Adres zmiennej 'a' (przez wskaünik): %p, Wartosc: %d\n", (void*)ptr_a, *ptr_a);
    int difference = *ptr_b - *ptr_a;
    printf("Roznica dwoch liczb: %d\n", difference);

    int c = 15;
    int* ptr_c = &c;
    float avg = (*ptr_a + *ptr_b + *ptr_c) / 3.0;
    printf("Srednia trzech liczb: %.2f\n", avg);

    return 0;
}

//Zadanie 2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Podaj rozmiar tablicy: ");
    scanf_s("%d", &n);
    int* tablica = (int*)malloc(n * sizeof(int));
    if (tablica == NULL) {
        printf("B≥πd alokacji pamiÍci.\n");
        return 1;
    }
    printf("Adres pierwszego elementu tablicy: %p\n", (void*)&tablica[0]);
    if (n >= 4) {
        printf("Adres czwartego elementu tablicy: %p\n", (void*)&tablica[3]);
    }
    else {
        printf("Tablica nie ma czwartego elementu.\n");
    }
    int min, max;
    printf("Podaj zakres liczb (min max): ");
    scanf_s("%d %d", &min, &max);
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        tablica[i] = rand() % (max - min + 1) + min;
        printf("Adres %d-tego elementu: %p, Wartosc: %d\n", i + 1, (void*)&tablica[i], tablica[i]);
    }
    free(tablica);

    return 0;
}

//Zadanie 3
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Podaj rozmiar tablicy: ");
    scanf_s("%d", &n);

    int* tablica = (int*)malloc(n * sizeof(int));
    if (tablica == NULL) {
        printf("Blad alokacji pamieci!\n");
        return 1;
    }
    float suma = 0.0;
    for (int i = 0; i < n; i++) {
        printf("Podaj %d-ty element tablicy: ", i + 1);
        scanf_s("%d", &tablica[i]);
        suma += tablica[i];
    }
    float srednia = suma / n;
    printf("Srednia: %.2f\n", srednia);

    printf("Elementy wieksze od sredniej:\n");
    for (int i = 0; i < n; i++) {
        if (tablica[i] > srednia) {
            printf("%d ", tablica[i]);
        }
    }
    printf("\n");
    free(tablica);

    return 0;
}

//Zadanie 4
#include <stdio.h>

void kwadrat(int* x) {
    *x = (*x) * (*x);
}
int main() {
    int a;
    printf("Podaj liczbe: ");
    scanf_s("%d", &a);
    kwadrat(&a);
    printf("Kwadrat liczby: %d\n", a);

    return 0;
}

//Zadanie 5
#include <stdio.h>

int* potega(int* x, int* n) {
    static int wynik = 1;
    for (int i = 0; i < *n; i++) {
        wynik *= *x;
    }
    return &wynik;
}
int main() {
    int x, n;
    printf("Podaj liczbe: ");
    scanf_s("%d", &x);
    printf("Podaj wykladnik: ");
    scanf_s("%d", &n);
    int* wynik = potega(&x, &n);
    printf("Wynik potegi: %d\n", *wynik);
    return 0;
}

//Zadanie 6
#include <stdio.h>
void wypisz(char* znak, int* n) {
    for (int i = 0; i < *n; i++) {
        printf("%c ", *znak);
    }
    (*n)--;
}

int main() {
    char znak;
    int n;

    printf("Podaj znak: ");
    scanf_s(" %c", &znak);
    printf("Podaj liczbÍ powtorzen: ");
    scanf_s("%d", &n);

    wypisz(&znak, &n);
    printf("\nPozostala liczba powtorzen: %d\n", n);

    return 0;
}

//Zadanie 7
#include <stdio.h>

int mniejsza(int* x, int* y) {
    if (*x < *y) {
        return *x;
    }
    return *y;
}
int* wskaznik_mniejszy(int* x, int* y) {
    if (*x < *y) {
        return x;
    }
    return y;
}
int main() {
    int a, b;
    printf("Podaj dwie liczby: ");
    scanf_s("%d %d", &a, &b);
    printf("Mniejsza liczba: %d\n", mniejsza(&a, &b));
    int* wsk = wskaznik_mniejszy(&a, &b);
    printf("Mniejsza liczba przez wskaznik: %d\n", *wsk);

    return 0;
}

//Zadanie 8
#include <stdio.h>
void zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Podaj dwie liczby: ");
    scanf_s("%d %d", &x, &y);
    printf("Przed zamiana: x = %d, y = %d\n", x, y);
    zamien(&x, &y);
    printf("Po zamianie: x = %d, y = %d\n", x, y);
    return 0;
}*/