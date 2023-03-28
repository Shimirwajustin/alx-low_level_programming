#include <stdlib.h>
#include "main.h"
/**
* *malloc_checked - function
*@b: argument

* Return: not always 0
*/
void *malloc_checked(unsigned int b)
{
void *just;
just = malloc(b);
if (just == NULL)
exit(98);
return (just);
}
