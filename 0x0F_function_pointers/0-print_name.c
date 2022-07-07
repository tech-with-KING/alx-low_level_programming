#include "functions.h"
#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
	(*f)("my name id your bestie");
}
