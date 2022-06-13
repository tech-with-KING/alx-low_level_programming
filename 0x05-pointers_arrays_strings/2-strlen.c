#include "main.h"
#include <stdio.h>
/**
 *_strlen - this function gives the length of any string passed to it
 *
 *Return: 0 always succes
 */

int _strlen(char *s)
{
	int len;

	len = strlen(*s);
	return (len);
}
