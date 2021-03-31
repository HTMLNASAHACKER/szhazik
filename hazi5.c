#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void beolvasas( int *X, int n); 
void sorakoztatas( int *X, int n); 
void kiiras( int X[], int n); 

int main()
{
	int *A=NULL, n, i;

	do{
		printf("elemek szama >>> ");
		scanf("%d", &n);
	}while(n<=0);

	if ((A=(int *)calloc(n,sizeof(int)))==NULL)
	{
		printf( "\nNincs eleg memoria");
		return 0;
	}

	for ( i=0; i<n; i++)
		*(A+i)=0;

	beolvasas( A,n);
	sorakoztatas( A,n);
	printf("\n");
	kiiras( A,n);
	free(A);
	sleep(9000);
	return 0;
}

void beolvasas( int *X, int n)
{
	int i;
	for( i=0; i<n; i++)
	{
		printf("\ntomb %d elemet >>> ", i);
		scanf("%d", X+i);
	}
}

void sorakoztatas(int *X,int n)
{
	int i,j, temp;
	for ( i=0; i<n-1; i++)
		for ( j=i+1; j<n; j++)
			if ( *(X+i)> *(X+j))
			{
				temp=*(X+i);
				*(X+i)=*(X+j);
				*(X+j)=temp;
			}
}

void kiiras( int X[], int n)
{
	int i;
	for ( i=0; i<n; i++)
	printf("\nA tomb[%d] = %d", i, X[i]);
}
