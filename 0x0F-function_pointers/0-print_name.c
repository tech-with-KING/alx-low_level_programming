#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - this function calls the print name function
 *Retunrs: void
 *@name: this is one of the two funtion parameter
 *@f:this is the child fucntion to be called using it’s pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
