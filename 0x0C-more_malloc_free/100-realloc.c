#include <stdlib.h>
#include "main.h"
/**
**_realloc - function
*@ptr: an array
*@old_size: integer 1
*@new_size: integr 2
*Return: not always 0
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
char *b;
unsigned int c;

if (new_size == old_size)
return (ptr);
if (new_size == 0 && p)
{
free(ptr);
return (NULL);
}

if (!ptr)
return (malloc(new_size));
p = malloc(new_size);

if (!p)
return (NULL);
b = ptr;

if (new_size < old_size)
{
for (c = 0; c < new_size; c++)
p[c] = b[c];
}

if (new_size > old_size)
{
for (c = 0; c < old_size; c++)
p[c] = b[c];
}
free(ptr);
return (p);
}
