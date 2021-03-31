#include <stdio.h>
#include <unistd.h>

void csere(int *x, int *y);

int main ( void )
{
	int a, b;
	printf("A ertrek >>> ");
	scanf("%d",&a);
	printf("\bB ertek >>> ");
	scanf("%d",&b);
	csere( &a, &b);
	printf("\nA valtozok erteke a csere utan: ");
	printf("\nA = %d",a);
	printf("\nB = %d",b);

	sleep(9000);
	return(0) ;
}


void csere(int *x, int *y)
{
	int seged;
	seged =*x;
	*x=*y;
	*y= seged;
}
