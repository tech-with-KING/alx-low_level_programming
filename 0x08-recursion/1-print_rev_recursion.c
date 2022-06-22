#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *_print_rev_recursion - this printfs a string to stdo with a new line
 *
 *@@s: this is the string to be printed out in reverse
 *Return: void
 */
void _print_rev_recursion(char *s)
{
	int i;
	int j;

	j = 0;
	char *rev;
	i = strlen(s);
	for (; i > 0 && j < strlen(s);j++, i--) {
		rev[j] = s[i];
	}
	
}
