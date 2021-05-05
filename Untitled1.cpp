#include <stdio.h>
#include <math.h>
//#include <cmath>
#include <stdlib.h>
#include <unistd.h>

typedef struct pont {
    float x;
    float y;
} PONT;

int main()
{
    float tavolsag;

    PONT pont_0;
    printf("\n0. pont x koordinataja >>> ");
	scanf("%f", &pont_0.x);
    printf("\n0. pont y koordinataja >>> ");
	scanf("%f", &pont_0.y);
    //pont_0.y = 1;
    //pont_0.x = 5;
    PONT pont_1;
    printf("\n1. pont x koordinataja >>> ");
	scanf("%f", &pont_1.x);
    printf("\n1. pont y koordinataja >>> ");
	scanf("%f", &pont_1.y);
    //pont_1.x = 9;
    //pont_1.y = 4;

    tavolsag = sqrt(pow((pont_0.x - pont_1.x), 2) + pow((pont_0.y - pont_1.y), 2));

    printf("pontok kozotti tavolsag: %f\n", tavolsag);

    sleep(900000);
    return 0;
}
