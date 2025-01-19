//Zadanie 1
/*#include <stdio.h>
#include <string.h>

int main() {
    char tekst[100]; 
    printf("Podaj tekst: ");
    fgets(tekst, sizeof(tekst), stdin);

    tekst[strcspn(tekst, "\n")] = '\0';

    char kopiowany_tekst[100];
    strcpy_s(kopiowany_tekst, sizeof(kopiowany_tekst), tekst);  

    char nowy_tekst[200]; 
    strcpy_s(nowy_tekst, sizeof(nowy_tekst), tekst); 
    strcat_s(nowy_tekst, sizeof(nowy_tekst), " - Kopia: ");  
    strcat_s(nowy_tekst, sizeof(nowy_tekst), kopiowany_tekst);  

    printf("Dlugosc wprowadzonego tekstu: %zu\n", strlen(tekst));
    printf("Oryginalny tekst: %s\n", tekst);
    printf("Skopiowany tekst: %s\n", kopiowany_tekst);
    printf("Nowy tekst po polaczeniu: %s\n", nowy_tekst);

    return 0;
}

//Zadanie 2
#include <stdio.h>

int main() {
    printf("Kody ASCII dla znaków od 'a' do 'z':\n");
    for (char c = 'a'; c <= 'z'; c++) {
        printf("%c: %d\n", c, c);
    }

    printf("\nKody ASCII dla znaków od 'A' do 'Z':\n");
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c: %d\n", c, c);
    }

    printf("\nKody ASCII dla znaków od '0' do '9':\n");
    for (char c = '0'; c <= '9'; c++) {
        printf("%c: %d\n", c, c);
    }

    return 0;
}

//Zadanie 3
#include <stdio.h>
#include <ctype.h>

int jest_samogloska(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char tekst[100];
    int samogloski = 0, spolgloski = 0;

    printf("Podaj tekst: ");
    fgets(tekst, sizeof(tekst), stdin);
    for (int i = 0; tekst[i] != '\0'; i++) {
        if (isalpha(tekst[i])) {
            if (jest_samogloska(tekst[i])) {
                samogloski++;
            }
            else {
                spolgloski++;
            }
        }
    }

    printf("Samogloski: %d\n", samogloski);
    printf("Spolgloski: %d\n", spolgloski);

    return 0;
}

//Zadanie 4
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char tekst[100];
    printf("Podaj tekst: ");
    fgets(tekst, sizeof(tekst), stdin);
    tekst[strcspn(tekst, "\n")] = '\0';
    int n = strlen(tekst);
    for (int i = n - 1; i >= 0; i--) {
        putchar(toupper(tekst[i]));  
    }
    printf("\n");

    return 0;
}

//Zadanie 5
#include <stdio.h>

void wypisz_cyfry_slowami(int cyfra) {
    switch (cyfra) {
    case 0: printf("zero "); break;
    case 1: printf("jeden "); break;
    case 2: printf("dwa "); break;
    case 3: printf("trzy "); break;
    case 4: printf("cztery "); break;
    case 5: printf("piêæ "); break;
    case 6: printf("szeœæ "); break;
    case 7: printf("siedem "); break;
    case 8: printf("osiem "); break;
    case 9: printf("dziewiêæ "); break;
    }
}

int main() {
    int liczba;
    printf("Podaj liczbe: ");
    scanf_s("%d", &liczba);
    while (liczba > 0) {
        wypisz_cyfry_slowami(liczba % 10);
        liczba /= 10;
    }
    printf("\n");

    return 0;
}

//Zadanie 6
#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "abcdefghijklmnopqrstuvwxyz";
    char s2[] = "zyxwvutsrqponmlkjihgfedcba";
    char napis[100];

    printf("Podaj ciag znakow: ");
    fgets(napis, sizeof(napis), stdin);
    napis[strcspn(napis, "\n")] = '\0';
    for (int i = 0; napis[i] != '\0'; i++) {
        char* pozycja = strchr(s1, napis[i]);
        if (pozycja != NULL) {
            int index = pozycja - s1; 
            napis[i] = s2[index];     
        }
    }

    printf("Zakodowany ciag: %s\n", napis);

    return 0;
} */