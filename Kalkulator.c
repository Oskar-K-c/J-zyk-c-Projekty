#include <math.h>
#include <stdio.h>
#define PI 3.14


int main() {
    printf("========Kalkulator=========\n 1.Dodawanie\n 2.Odejmowanie\n 3.Mnozenie\n 4.Dzielenie\n 5.podniesienie liczby do potegi\n 6.wyznaczenie pierwiastka kwadratowego\n 7.wyznaczenie wartosci bezwzglednej \n 8.wyznaczenie wartosci funkcji trygonometrycznych\n");

    float a, b, degrees, radians, sine, cosine, tangent, cotangent;
    int d;

    printf("Wybierz obliczenie: ");
    scanf_s("%d", &d);

    if (d <= 4 || d == 6) {
        printf("pierwsza liczba: ");
        scanf_s("%f", &a);
        printf("druga liczba: ");
        scanf_s("%f", &b);

        switch (d) {
        
        case 1: printf("Wynik dod: %.1f\n", a + b); 
            
            break;
        
        case 2: printf("Wynik ode: %.1f\n", a - b); 
            
            break;
        
        case 3: printf("Wynik mno: %.1f\n", a * b); 
            
            break;
        
        case 4:
            if (b != 0) {
                printf("Wynik dzie: %.1f\n", a / b);
            }
            else {
                printf("Nie dziel przez zero !!!!!!!\n");
            }
            
            break;
        case 5: printf("Wynik potêgowania: %.1f\n", pow(a, b)); 
            break;
        default: 
            
            break;
        }
    }
    else if (d > 4 && d != 6) {
        switch (d) {
        case 6:
            printf("Podaj liczbe: ");
            scanf_s("%f", &b);
            printf("Wynik pierwiastka: %.1f\n", sqrt(b));
            break;
        case 7:
            printf("Podaj liczbe: ");
            scanf_s("%f", &b);
            printf("Wartosc bezwzglêdna: %.1f\n", fabs(b));
            break;
        case 8:
            printf("Podaj kat: ");
            scanf_s("%f", &degrees);
            radians = degrees * (PI / 180.0);
            sine = sin(radians);
            cosine = cos(radians);
                             
            if (cosine != 0) {
                tangent = tan(radians);
                cotangent = 1.0 / tangent;
            }
            else {
                tangent = cotangent = NAN;
            }

            printf("sin(%.2f°) = %.3f\n", degrees, sine);
            printf("cos(%.2f°) = %.3f\n", degrees, cosine);
            if (!isnan(tangent)) {
                printf("tg(%.2f°) = %.3f\n", degrees, tangent);
                printf("ctg(%.2f°) = %.3f\n", degrees, cotangent);
            }
                break;
        default:
            break;
        }
    }
         else {
        return 0;
    }

   
    return 0;
}