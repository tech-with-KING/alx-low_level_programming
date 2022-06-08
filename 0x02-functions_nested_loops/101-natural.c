#include <stdio.h>
/**
 *main - prints natural numbers
 *
 *Return: 0 always success
 */


int main(void)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	for (i = 0; i <= 0; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
		else
		{
			sum = sum;
		}
	}

	printf("%d\n", sum);
	return (0);
}
