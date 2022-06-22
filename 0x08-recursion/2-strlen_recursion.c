



#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *_strlen_recursion - this function  recursively finds the lenght of it valu
 *
 *@s: thid is the string we are goin to find the lenght
 *Return: the char
 */
int _strlen_recursion(char *s)
{

	if (sizeof(*s) -1 == strlen(s))
		return (strlen(s));
	return (_strlen_recursion(s + 1));
}
