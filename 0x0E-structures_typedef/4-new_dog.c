#include <stdlib.h>
#include "dog.h"
/**
*_strlen - A function to return the length of a string
*@s: string to evaluate
*Return: ther is no return
*/
int _strlen(char *s)
{
int t = 0;
while (s[t] != '\0')
{
t++;
}
return (t);
}

/**
* *_strcpy - function that copies pointer to src
*@dest: pointer
*@src: string
*Return: return the pointer
*/

char *_strcpy(char *dest, char *src)
{
int a, b;

a = 0;
while (src[a] != '\0')
{
a++;
}
for (b = 0; b < a; b++)
{
dest[b] = src[b];
}
dest[b] = '\0';
return (dest);
}

/**
*new_dog - function that creates a new dog
*@name: dog's name
*@age: dog's age
*@owner: dog owner
*Return: pointer or NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int c, d;
c = _strlen(name);
d = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (c + d));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (d + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
