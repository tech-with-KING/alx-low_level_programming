#include "header.h"
#include <string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *print_binary - this function takes an unsigned long int
 *and prints the binary form of the interger
 *@n: this is the long intergerqqqqqq
 *Return: void
 */
void print_binary(unsigned long n)
{
	while (n > 1) {
		n = n / 2;
		printf("%lu",n % 2 >> 1);
	}
}
int main()
{
	print_binary(2734);
	return (0);
}
