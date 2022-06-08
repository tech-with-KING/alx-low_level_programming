#include "main.h"
#include <stdio.h>
/**
 *print_natural_numbers - prints natural numbers
 *
 *Return: 0 always success
 */


int print_natural_numbers(void)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (i <= 0)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
