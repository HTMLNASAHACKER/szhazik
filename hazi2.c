#include <stdio.h>
#include <unistd.h>

bool isprime(int num);
int beolvas();

int main()
{
    int a;
    a = beolvas();

    if(isprime(a))
    {
        printf("az %d prim szam", a);
    }
    else
    {
        printf("az %d nem prim szam", a);
    }

    sleep(5000);
    return (0);
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

bool isprime(int num)
{
    if (num <= 1){ return 0; }
	if (num % 2 == 0 && num > 2){ return 0; }
	for(int i = 3; i < num / 2; i+= 2)
	{
	if (num % i == 0)
		{
	   		return 0;
		}
	}
    return 1;
}  