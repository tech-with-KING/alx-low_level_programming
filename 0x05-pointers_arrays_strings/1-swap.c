#include "main.h"
#include <stdio.h>
/**
 *swap_int - this function prins a ponter to a value;
 *
 *@x: this parameter is the needed parameter
 *@y: this parameter is the second value to be printed
 */

void swap_int(int *x, int *y)
{
	int b;

	b = *x;
	*x = *y;
	*y = b;
}
