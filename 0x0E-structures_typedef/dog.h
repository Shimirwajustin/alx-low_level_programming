#include <stdlib.h>
#include "dog.h"
/**
*init_dog - initializes a variable
*@name: 1st member
*@age: 2nd member
*@owner: 3rd member
*/
void init_dog(truct dog *d, char *name, float age, char *owner)
{
if (d ==NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}

