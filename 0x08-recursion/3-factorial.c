#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *factorial - this the function compares strings to see if they are identical
 *
 *@n: n is the input
 *Return: void
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
