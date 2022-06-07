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
	char j = 'a';
	int i = 0;

	while (i <= 10)
	{
		while (j <= 'Z')
		{
			putchar(j);
		}
		putchar('\n');
		i++;
	}

}
