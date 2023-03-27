#include <stdlib.h>
#include "dog.h"
/**
*init_dog - initializes a variable
*@d: pointer
*@name: argument of a name
*@age: argument of age
*@owner: argument of owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
