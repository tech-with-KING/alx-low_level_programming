
#include "main.h"
#include <stdio.h>
/**
 *main - this functions
 *
 *Return: 0 always
 *print_alphabet - this prints 26 alphabet
 */

int print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	return (0);
}
int main(void)
{
	print_alphabet();
	return (0);
}
