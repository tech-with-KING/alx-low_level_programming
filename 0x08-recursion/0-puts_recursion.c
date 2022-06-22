#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *_puts_recursion - this prints a string to stdo with a new line
 *
 *@s: this is the string to be printed out
 *Return: void
 */
void _puts_recursion(char *s)
{
	if (s[strlen(s)] == '\0')
		printf("%c", *s);
	_puts_recursion(s + 1);
}
