#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 30
typedef struct tanulo { //struktura definialasa
    char nev[16];
    char vezeteknev[16];
    int hianyzasok;
}
Ttanulo;
Ttanulo * deklaralas(int n); //struktura egydimenziós tömbjének deklarálása
void lenullazas(Ttanulo * X, int n, Ttanulo x); //struktura egydimenziós tömbjének inicializálása
void beolvasas(char s[], int k); //string beolvasasa

void sort(Ttanulo * tomb, int n) {
    Ttanulo seged;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (tomb[j].hianyzasok >= tomb[i].hianyzasok) {
                if (tomb[j].hianyzasok > tomb[i].hianyzasok) {
                    seged = tomb[j];
                    tomb[j] = tomb[i];
                    tomb[i] = seged;
                } else {
                    if (strcmp(tomb[j].vezeteknev, tomb[i].vezeteknev) < 0) {
                        seged = tomb[j];
                        tomb[j] = tomb[i];
                        tomb[i] = seged;
                    } else {
                        if ((strcmp(tomb[j].vezeteknev, tomb[i].vezeteknev) == 0) &&
                            (strcmp(tomb[j].nev, tomb[i].nev) < 0))

                        {
                            seged = tomb[j];
                            tomb[j] = tomb[i];
                            tomb[i] = seged;
                        }
                    }
                }
            }
        }
    }
}

void kiiras(Ttanulo * tomb, int n) {
    printf("\n\nVEZETEKNEV\t\tNEV\t\tHIANYZASOK\n");
    for (int i = 1; i <= 50; i++) printf("-");
    printf("\n");
    int k;
    if (n < 5)
        k = n;
    else
        k = 5;
    for (int i = 0; i < k; i++)
        printf("%-15s\t\t%-15s\t%u\n",
            tomb[i].vezeteknev, tomb[i].nev, tomb[i].hianyzasok);

}

int main(void) {
    Ttanulo * tomb, a = {
        "",
        "",
        0
    }, seged;
    int i, j, k;
    int n;
    do {
        printf("Kerem a tanulok szamat: ");
        scanf("%d", & n);
    } while (n <= 0 || n > MAX);
    tomb = deklaralas(n);
    lenullazas(tomb, n, a);
    printf("\n\nKerem a tanulok adatait:\n\n");
    for (i = 0; i < n; i++) {
        printf(" %d. Tanulo\n", i + 1);
        printf("Nev: ");
        beolvasas(tomb[i].nev, 15);
        printf("\nVezeteknev: ");
        beolvasas(tomb[i].vezeteknev, 15);
        printf("\nHianzyasok szama = ");
        scanf("%u", & tomb[i].hianyzasok);
    }
    sort(tomb, n);
    kiiras(tomb, n);
    return (0);
}
Ttanulo * deklaralas(int n) {
    Ttanulo * X = NULL;
    if ((X = (Ttanulo * ) calloc(n, sizeof(Ttanulo))) == NULL) {
        printf("\nNincs eleg memoria");
        return NULL;
    } else
        return X;
}
void lenullazas(Ttanulo * X, int n, Ttanulo x) {
    int i;
    for (i = 0; i < n; i++)
        *
        (X + i) = x;
}
void beolvasas(char s[], int k) {
    int i;
    char c;
    for (i = 0; i < k && c != 13;) {
        if (isalpha(c = getchar())) printf("%c", c), s[i] = c, i++;
    }
    s[i] = '\0';
}
