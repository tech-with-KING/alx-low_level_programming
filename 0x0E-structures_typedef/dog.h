#ifndef DOG_STRU
#define DOG_STRU
/**
 *struct dog - this contains the dog properties
 *@name: char
 *@age: float
 *@owner: char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
