#include <stdlib.h>
#include "main.h"
/**
* *_realloc - a function
*@ptr: pointer
*@old_size: size of the memory allocator
*@new_size: new size of the new memory
*Return: not always 0
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *shimwa;
char *just;
unsigned int a;

if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
shimwa = malloc(new_size);
if (!shimwa)
return (NULL);
just = ptr;
if (new_size < old_size)
{
for (a = 0; a < new_size; a++)
shimwa[a] = just[a];
}
if (new_size > old_size)
{
for (a = 0; a < old_size; a++)
shimwa[a] = just[a];
}
free(ptr);
return (shimwa);
}
