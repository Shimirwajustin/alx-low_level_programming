#include <stdlib.h>
#include "dog.h"
/**
*init_dog - a function
*@d: pointer 1
*@name: pointer 2
*@age: float number
*@owner: pointer 3
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
