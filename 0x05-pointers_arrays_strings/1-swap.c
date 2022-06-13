#include "main.h"
#include <stdio.h>
/**
 *swap_int - this function prins a ponter to a value;
 *
 *@b: this parameter is the needed parameter
 *@a: this parameter is the second value to be printed
 */

void swap_int(int *a, int *b)
{
	a = &b;
	b = &a;
}
