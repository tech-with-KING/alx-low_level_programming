#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - a function that alocates memory to a value
 *given to it in a malloc functions
 *the malloc funtion does not retun a specific type because any value
 *can return any value
 *@b: this is the memory size passed as a parameter
 *Return:s
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
