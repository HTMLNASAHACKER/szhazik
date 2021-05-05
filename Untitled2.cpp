#include <stdio.h>
#include <math.h>
//#include <cmath>
#include <stdlib.h>
#include <unistd.h>

typedef struct tanulo {
    float matek;
    float alapok;
    float atlag;
} TANULO;

int main()
{
    TANULO laci;
    printf("\nHanyasa van Lacinak matekbol? >>> ");
	scanf("%f", &laci.matek);
    printf("\nHanyasa van Lacinak alapokbol? >>> ");
	scanf("%f", &laci.alapok);;
    TANULO reliti;
    printf("\nHanyasa van Relitinek matekbol? >>> ");
	scanf("%f", &reliti.matek);
    printf("\nHanyasa van Relitinek alapokbol? >>> ");
	scanf("%f", &reliti.alapok);

    laci.atlag = (laci.matek + laci.alapok) / 2;
    reliti.atlag = (reliti.matek + reliti.alapok) / 2;

    printf("Laci atlaga: %f\n", laci.atlag);
    printf("Reliti atlage: %f\n", reliti.atlag);

    sleep(900000);
    return 0;
}
