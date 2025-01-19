//Zadanie 1
/*
#include <stdio.h>

int silnia(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * silnia(n - 1);
}

int main() {
    int n;
    printf("Podaj liczbe n: ");
    scanf_s("%d", &n);
    printf("Silnia z %d wynosi %d\n", n, silnia(n));
    return 0;
}

//Zadanie 2
#include <stdio.h>
int wyraz(int n) {
    if (n == 1) {
        return -1;
    }
    return -wyraz(n - 1) * (n - 2);
}

int main() {
    int n;
    printf("Podaj liczbe n: ");
    scanf_s("%d", &n);
    printf("n-ty wyraz ciagu wynosi %d\n", wyraz(n));
    return 0;
}

//Zadanie 3
#include <stdio.h>
int nwd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return nwd(b, a % b);
}

int main() {
    int a, b;
    printf("Podaj dwie liczby a i b: ");
    scanf_s("%d %d", &a, &b);
    printf("NWD(%d, %d) wynosi %d\n", a, b, nwd(a, b));
    return 0;
}

//Zadanie 4
#include <stdio.h>
int wynik(int i) {
    if (i < 3) {
        return 1;
    }
    if (i % 2 == 0) {
        return wynik(i - 3) + wynik(i - 1) + 1;
    }
    else {
        return wynik(i - 1) % 7;
    }
}
int main() {
    for (int i = 2; i <= 8; i++) {
        printf("wynik(%d) = %d\n", i, wynik(i));
    }
    return 0;
}

//Zadanie 5
#include <stdio.h>
void dziesietny_na_binar(int n) {
    if (n == 0) {
        return;
    }
    dziesietny_na_binar(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;
    printf("Podaj liczbe w systemie dziesietnym: ");
    scanf_s("%d", &n);
    printf("Liczba w systemie dwojkowym: ");
    if (n == 0) {
        printf("0");
    }
    else {
        dziesietny_na_binar(n);
    }
    printf("\n");
    return 0;
}

//Zadanie 6
#include <stdio.h>
int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
int main() {
    int n;
    printf("Podaj liczbe n: ");
    scanf_s("%d", &n);
    printf("%d-ty wyraz ciagu Fibonacciego wynosi %d\n", n, fib(n));
    return 0;
}
//Zadanie 8
#include <stdio.h>
int F(int x, int n) {
    if (n == 1) {
        return x;
    }
    if (n % 3 == 0) {
        int k = F(x, n / 3);
        return k * k * k;
    }
    else {
        return x * F(x, n - 1);
    }
}
int main() {
    int x, n;
    printf("Podaj liczbe x: ");
    scanf_s("%d", &x);
    printf("Podaj liczbe n: ");
    scanf_s("%d", &n);
    printf("Wynik F(%d, %d) wynosi %d\n", x, n, F(x, n));
    return 0;
    //nie dokoñca rozumiem te tabelki do tego zadania.
}*/
