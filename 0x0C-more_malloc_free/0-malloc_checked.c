#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - this functions asigns the value of the location
 *given to it in a malloc functions
 *@b: this is the memory size passed as a parameter
 *Return:s
 */
char *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
	{
		return (0);
	}
	return (s);
}
