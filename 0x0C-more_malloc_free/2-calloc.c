#include <stdlib.h>
#include "main.h"
/**
* *shimirwa - a function that fills memory
*@d: memory area
*@c: character argument
*@t: integer algument
*Return: not always 0
*/
char *shimirwa(char *d, char c, unsigned int t)
{
unsigned int a;

for (a = 0; a < t; a++)
{
d[a] = c;
}

return (d);
}

/**
* *_calloc - a function that allocates a memory
*@nmemb: unsigned int
*@size: unsigned int
*Return: return 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *just;

if (nmemb == 0 || size == 0)
return (NULL);
just = malloc(size * nmemb);

if (just == NULL)
return (NULL);

shimirwa(just, 0, nmemb * size);
return (just);
}
