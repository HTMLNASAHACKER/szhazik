#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int *deklaralas(int n, int m); 	
void lenullazas(int *X, int n, int m);
void beolvasas( int *X, int n, int m);
void osszeg( int *X, int n, int m);
void kiiras( int *X, int n, int m);

int main()
{
	int *A=NULL, n, m;
	do{
		printf("sorok a szama >>> ");
		scanf("%d", &n);
	}while(n<=0);
	do{
		printf("oszlopok a szama >>> ");
		scanf("%d", &m);
	}while(m<=0);
	A=deklaralas(n, m);
	lenullazas(A,n, m);
	beolvasas( A,n, m);
	printf("\n");
	kiiras( A,n, m);
	printf("\n");
	osszeg( A, n, m);
	
	free(A);
	sleep(9000);
	return 0;
}
int *deklaralas(int n, int m) 
{
	int *X=NULL, i;
	if ((X=(int *)calloc((n*m),sizeof(int)))==NULL)
	{
		printf( "\nNincs eleg memoria");
		return NULL;
	}
	else
		return X;
}
void lenullazas(int *X, int n, int m)
{
	int i, j;
	for ( i=0; i<n; i++)
		for ( j=0; j<m; j++)
			*(X+i*m+j)=0;
}
void beolvasas( int *X, int n, int m)
{
	int i, j;
	for( i=0; i<n; i++)
		for ( j=0; j<m; j++)
{
	printf("\n[%d][%d] eleme >>> ", i, j);
	scanf("%d", X+i*m+j);
}
}
void osszeg( int *X,int n, int m)
{
	int i,j, S=0;
	for ( i=0; i<n; i++)
		for ( j=0; j<m; j++)
			S=S+( *(X+i*m+j));
	printf("\nelemek osszege: %d", S);
}
void kiiras( int *X, int n, int m)
{
	int i, j;
	for ( i=0; i<n; i++)
		for ( j=0; j<m; j++)
			printf("\nA tomb A[%d][%d] eleme: %d", i, j, *(X+i*m+j));
}
