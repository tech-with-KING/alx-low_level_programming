#include <unistd.h>
/**
 *_putchar - helps to write out it’s given parameter
 *
 *Return: 0 always
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}
