#include <stdio.h>
#include "dog.h"
/**
 *print_dog - this fuction initializes the parameters of dog
 *@d: this is the dog to be named
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name == NULL ? printf("nill\n") : printf("Name: %s\n", d->name);
		d->age == '\0' ? printf("nill\n") : printf("Age: %f\n", d->age);
		d->owner == NULL ? printf("nill\n") : printf("Owner: %s\n", d->owner);
	}
}
