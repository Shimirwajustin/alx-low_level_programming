#include "main.h"
#include <stdlib.h>
/**
**per - a function
*@c: an array
*@d: character
*@e: integer
*Return: not always 0
*/
char *per(char *c,  char d, unsigned int e)
{
unsigned int a;
for (a = 0; a < e; a++)
{
c[a] = d;
}
return (c);
}
/**
**_calloc - a function
*@nmemb:an integer 1
*@size: an integer 2
*Return: not always 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{

char *c;

if (nmemb == 0 || size == 0)
return (NULL);

c = malloc(size * nmemb);

if (c == NULL)
return (NULL);

per(c, 0, nmemb * size);

return (c);
}
