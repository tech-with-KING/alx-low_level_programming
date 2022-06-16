#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strncat - this fuction concatenates two string
 *
 *Return: dest this is th brand new pair
 *
 *@dest: dest is the first param
 *@src: src is the second parameter
 */
char *_strncat(char *dest, char *src,int n)
{
	int i = 0;
	int j = strlen(dest);
	char *age;

	while (dest[i] != '\0')
	{
		dest[i] = dest[i];
		i++;
	}
	dest[i] = '\0';
	j = strlen(dest);
	i = 0;
	while (src[i] < j)
	{
		dest[j] = src[i];
		j++, i++;
	}
	dest[j] = '\n';
	return (dest);
}
