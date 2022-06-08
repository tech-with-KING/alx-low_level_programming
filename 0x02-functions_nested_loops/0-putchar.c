#include "main.h"
/**
 *main - this function prints the valur putchar
 *
 *Return: 0 always success
 */

int main(void)
{
	int n = 0;
	
	char name[8] = "_putchar";
	while (n < 8)
	{
		_putchar(name[n]);
		n++;
	}
		
	return (0);
}
