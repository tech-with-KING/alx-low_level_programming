
#include "main.h"
#include <stdio.h>
/**
 *print_alphabet - this prints 26 alphabet
 *
 *Description: print_alphabet prints the english alphabet
 *
 *Return: return void
 */

void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
