#include "main.h"
#include <ctype.h>
#include <stdint.h>
/**
 *_islower - this checks if the supplied parameter is lower case
 *@c: this is the value to be usee for the test
 *Description: _islower prints the english alphabet
 *
 *Return: 1 if the function is lower else return 0
 */
int _islower(int c)
{
	int n;

	n = c;
	if (islower(n) || isupper(n))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
