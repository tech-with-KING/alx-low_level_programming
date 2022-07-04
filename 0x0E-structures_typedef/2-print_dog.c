#include <stdio.h>
#include "dog.h"
/**
 *print_dog - this fuction initializes the parameters of dog
 *@d: this is the dog to be named
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
