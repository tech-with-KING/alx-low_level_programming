#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Prints numbers between 00 to 99.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%dis positive", n);
	}
	else if (n == 0)
	{
		printf("%dis is zero\n", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
