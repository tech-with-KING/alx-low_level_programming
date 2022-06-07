#include "main.h"
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
/**
 *print_sign - this checks if the supplied parameter is lower case
 *@c: this is the value to be usee for the test
 *Description: print_sign return 1 if the value is positive ans return0 if
 *
 *Return: 1 if the function is lower else return 0
 */
int print_sign(int c)
{
	int n;

	n = c;
	if (n > 0)
	{
		printf("+%d",n);
		return (1);
	}
	else if (n < 0)
	{
		printf("-%d\n",n);
		return (-1);
	}
	else if (n == 0)
	{
		printf("0%d\n",n);
		return (0);

	}
	else
	{
	        return 0;
	}

}
