#include <stdio.h>
#include <string.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
void trim(char *ope);
int main(void)
{
    char ope[] = "_putchar\n";
	printf("%s", ope); 
    trim(ope); 
	return (0);
}
void trim(char *ope)
{
    int i = strlen(ope)-1;
    while(i>0)
    {
        if (ope[i] == ' '||'\n')i--;
        else break;
    }
    ope[i + 1] = '\0';
}