#include "header.h"
#include <string.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *binary_to_unint - this function converts a binary to unsigned int
 *@b: this is a character format of the int
 *Return: result - the decimal interger form
 */
unsigned int binary_to_unint(const char *b)
{
	unsigned int result;
	int len = strlen(b);
	int i = 0;
	result = 0;
	while (i > 0 && len >= 0 &&*(b + i) != '\0'){
		result = result + atoi((b + i))*(2)^(len - i);
		i++;
		len--;
	}
	
	return (result);
}
