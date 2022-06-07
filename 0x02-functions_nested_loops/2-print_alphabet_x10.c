#include "main.h"
/**
  *print_alphabet_x10 - this prints 26 alphabet
 *
 *Description: print_alphabet_x10 prints the english alphabet
 *
 *Return: return void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char j;

		j = 'a';
		while (j <= 'z')
		{
			putchar(j);
			j++;
		}
		putchar('\n');
		i++;
	}

}
