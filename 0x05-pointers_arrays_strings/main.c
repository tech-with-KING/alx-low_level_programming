#include "main.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[] = "kingsley";
	char b[] = "modestus";
	int i = 0;
	char * rot;
	char * bot;
	int j = strlen(a);
	char age[]="";
	
	while (i < strlen(a))
	{
		rot = &a[i];
		age[i] = *rot;
		i++;
	}
	i = 0;
	while ( b[i] != '\0')
	{
		bot = &b[i];
		age[j] = *bot;
		j++,i++;
       }

	printf("%s\n",age);
    return (0);
}
