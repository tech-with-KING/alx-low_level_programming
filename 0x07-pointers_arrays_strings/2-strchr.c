#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strchr - thid function loops through a string to find a char
 *@s: string to be checked
 *@c: checked string
 *Return: c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
		{
			return ((s + i));
		}
	}
	return (NULL);
}
