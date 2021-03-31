#include <stdio.h>
int *deklaralas(int n, int m);
void lenullazas(int *X, int n, int m);
void beolvasas( int *X, int n, int m);
void osszeg( int *X, int n, int m);
void kiiras( int *X, int n, int m);
void legnagyobb(int *X, int n, int m );
void legkisebb(int *X, int n, int m );
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
printf("\nKerem a tomb A[%d][%d] elemet:", i, j);
scanf("%d", X+i*m+j);
}
}
/*void osszeg( int *X,int n, int m)
{
int i,j, S=0;
for ( i=0; i<n; i++)
for ( j=0; j<m; j++)
S=S+( *(X+i*m+j));
printf("\nA tomb elemeinek osszeget: %d", S);
}
void kiiras( int *X, int n, int m)
{
int i, j;
for ( i=0; i<n; i++)
for ( j=0; j<m; j++)
printf("\nA tomb A[%d][%d] eleme: %d", i, j, *(X+i*m+j));
}*/
void legnagyobb(int *X, int n, int m)
{
	int ln = *(X+0*m+0);
	int i, j;
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			if(ln < *(X+i*m+j))
			{
				ln = *(X+i*m+j);
			}	
		}
	}
	printf("a tomb legnagyobb eleme = %d", ln);
}
void legkisebb(int *X, int n, int m)
{
	int ln = *(X+0*m+0);
	int i, j;
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			if(ln > *(X+i*m+j))
			{
				ln = *(X+i*m+j);
			}	
		}
	}
	printf("a tomb legkisebb eleme = %d", ln);
}
