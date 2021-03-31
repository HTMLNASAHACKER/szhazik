#include "tomb.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int *A=NULL, n, m;
	do{
		printf("sorok >>> ");
		scanf("%d", &n);
	}while(n<=0);
	do{
		printf("oszlopok >>> ");
		scanf("%d", &m);
	}while(m<=0);
	A=deklaralas(n, m);
	lenullazas(A,n, m);
	beolvasas( A,n, m);
	/*printf("\n");
	kiiras( A,n, m);
	printf("\n");
	osszeg( A, n, m);*/
	printf("\n");
	legnagyobb(A, n, m);
	printf("\n");
	legkisebb(A, n, m);
	free(A);
	sleep(9000);
	return 0;
}
