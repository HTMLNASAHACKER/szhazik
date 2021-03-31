#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>
#define MAX_ELEM 30

void tomorites( char *s ); // a függvény deklarációja

int main(void)
{
	char s[MAX_ELEM];

	s[0]='\0';	
	printf("String : ");
	gets(s);
	tomorites(s); // a függvény elohívása
	printf("\n\nAz uj string: %s", s);
	
	sleep(9000);
	return(0);
}

void tomorites( char *s ) // a függvény definiálása
{
	int i,j;
	i=0;
	while(s[i]!='\0')
	{
		while(s[i]!=' ' && s[i]!='\0')
		i++;
		if(s[i]!='\0')
		{
			if(s[i+1] != ' ')
			i++;
			else
			{
			j=i;
				while(s[j]!='\0')
				{
					s[j]=s[j+1] ;
					j++;
				}
			}
		}
	}
}
