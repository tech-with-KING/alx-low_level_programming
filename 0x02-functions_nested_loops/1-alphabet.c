#include "main.h"
#include <stdio.h>
/**
 *main - this functions calls the print alphabet functions
 *
 *print_alphabet: this functions use a while loop to print the
 *26 letters of th
 *english alphabet in lower case
 *
 *Return: 0 always
 */
int print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
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
