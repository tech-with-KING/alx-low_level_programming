#include <stdio.h>
#include "dog.h"
/**
 *print_dog - this fuction initializes the parameters of dog
 *@d: this is the dog to be named
 */
void print_dog(struct dog *d)
{
	printf("Age: %f", d->age);
	printf("Name: %s", d->name);
	printf("Owner: %s", d->owner);
}
