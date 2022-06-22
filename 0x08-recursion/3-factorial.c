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
	int facto;

	if (n == 0)
	{
		facto = 1;
		return (facto);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		facto = factorial(n) * factorial(n - 1);
		return (facto);
	}
}
