#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: points to the struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
 * Description: Fuction that initializes name, age and owner of struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
