#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_memset - this function sets a value to a memory location
 *@value: this parameter is the dest param
 *@b:this character is to be assigned to the
 *@n: this parameter is the length value
 *Return:value
 */
char *_memset(char *value, char b, unsigned int n)
{
	char *boll;
	int i;

	i = 0;
	while (i < n)
	{
		boll = &b;
		value[i] = *boll;
		i++;
	}
	printf("%s\n", value);
	return (value);
}
