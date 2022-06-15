#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcat - this fuction concatenates two string
 *
 *Return: age this is th brand new pair
 *
 *@dest: dest is the first param
 *@src: src is the second parameter
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = strlen(dest);
	char *age;

	while (dest[i] != '\n')
	{
		age[i] = dest[i];
		i++;
	}
	dest[i] = '\n';
	i = 0;
	while (src[i] != '\0')
	{
		age[j] = src[i];
		j++, i++;
	}
	printf("%s", age);
	return (age);
}
