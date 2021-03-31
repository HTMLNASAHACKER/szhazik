#include <stdio.h>
#include <unistd.h>

int main()
{
    char s[1000], ch;
    int c_mennyiseg = 0;

    printf("Kerem a stringet >>> ");
    fgets(s, sizeof(s), stdin);

    printf("Melyik karakter? >>> ");
    scanf("%c", &ch);

	int i = 0;
    for(i; s[i] != '\0'; ++i)
	{
        if (ch == s[i])
            ++c_mennyiseg;
    }

    printf("%c karakterek mennyisege = %d", ch, c_mennyiseg);

	sleep(9000);
    return 0;
}
