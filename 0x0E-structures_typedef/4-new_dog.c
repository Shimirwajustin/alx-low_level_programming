#include <stdlib.h>
#include "dog.h"

/**
*shim - a function
*@s: pointer
*Return: not always 0
*/
int shim(char *b)
{
int a;
a = 0;
while (b[a] != '\0')
{
a++;
}
return (a);
}

/**
**just - a function
*@d: pointer 1
*@c: pointer 2
*Return: not always 0
*/
char *just(char *d, char *c)
{
int a = 0, b;
while (c[a] != '\0')
{
a++;
}
for (b = 0; b < a; b++)
{
d[b] = c[b];
}
d[b] = '\0';
return (d);
}

/**
**new_dog - function
*@name: pointer 1
*@age: age
*@owner: pointer 2
*Return: not always 0
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *chien;
int a, b;
a = shim(name);
b = shim(owner);
chien = malloc(sizeof(dog_t));
if (chien == NULL)
return (NULL);
chien->name = malloc(sizeof(char) * (a +1));
if (chien->name == NULL)
{
free(chien);
return (NULL);
}
chien->owner = malloc(sizeof(char) * (b +1));
if (chien->owner == NULL)
{
free(chien);
free(chien->name);
return (NULL);
}
just(chien->name, name);
just(chien->owner, owner);
chien->age = age;
return (chien);
}
