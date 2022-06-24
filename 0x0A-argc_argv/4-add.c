#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 *@argc: this parameter is the argument noo
 *@argv: this parameter is the argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum;
	int i, j, arg;

	i = 0, j = 1;
	sum = 0;
	while (i < argc)
	{
		arg = atoi(argv[j]);
		if (isdigit(arg))
		{
			sum = sum + arg;
			printf("Error\n");
		}
		else if (argc <= 2)
		{
			printf("0\n");
			break;
		}
		else
		{
			printf("Error");
			break;

		}
		i++;
		j++;
	}
	printf("%d\n", sum);
	return (0);
}
