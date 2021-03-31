#include <stdio.h>
#include <unistd.h>

int szoroz(int range); 
int beolvas();

int main()
{
    int a, faktorialis;
    a = beolvas();
    faktorialis = szoroz(a);

    printf("\n%d faktorialis: %d \n", a, faktorialis);
 
 	sleep(6000);
    return (0);
}

int szoroz(int a)
{
    int b = 1;
    for(int i = 1; i <= a; i++)
    {
        b *= i;
    }    

    return b;
}

int beolvas()
{
    int x = 0;

    while(x <= 0)
    {
        printf("n >>> ");
        scanf("%d",&x);
    }

    return x;
}