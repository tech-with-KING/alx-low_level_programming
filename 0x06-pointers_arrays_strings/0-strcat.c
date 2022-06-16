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

	while (dest[i] != '\0')
	{
		dest[i] = dest[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	j = strlen(dest);
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++, i++;
	}
	dest[j] = '\0';
	return (dest);
}
