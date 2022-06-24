#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *@argc: this parameter is the argument noo
 *@argv: this parameter is the argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	if (argc == 3)
	{
		printf("%d", a * b);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
