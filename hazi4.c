#include <stdio.h>
#include <stdlib.h>
int maxkeres( int x[], int n );
int main()
{
	int *A=NULL, n, i, max;

	do{
		printf("elemek szama >>> ");
		scanf("%d", &n);
	}while(n<=0);

	if ((A=(int *)calloc(n,sizeof(int)))==NULL)
	{
		printf( "\nNincs eleg memoria");
		return (0);
	}

	for ( i=0; i<n; i++)
		*(A+i)=0;

	printf("\ntomb elemei:\n");
	for( i=0; i<n; i++)
	{
		printf("A tomb %d eleme >>> ", i);
		scanf("%d", A+i);
	}
	
	printf("\n");
	for ( i=0; i<n; i++)
		printf("\n tom[%d] = %d", i, *(A+i));
	max=maxkeres( A, n) ;

	printf("\nA legnagyobb elem: %d", max);

	free(A);
	sleep(9000);
	return (0);
}

int maxkeres( int x[], int n )
{
	int i, maxelem;
	maxelem = x[0];
	for (i = 0; i < n; i++)
		if (x [i] > maxelem)
			maxelem = x[i];
	return maxelem;
}
