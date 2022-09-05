#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *mod - this function check if a given character given is upper case
 *Return: sum
 *@a: this is the character given in integer form
 *@b: this is the character given in integer form
 */
int mod(int a, int b)
{
	int sum;

	sum = a % b;
	return (sum);
}
