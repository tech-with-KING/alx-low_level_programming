#include "main.h"
#include <ctype.h>
/**
 *_islower - this checks if the supplied parameter is lower case
 *
 *Description: _islower prints the english alphabet
 *
 *Return: 1 if the function is lower else return 0
 */
int _islower(char c)
{

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
