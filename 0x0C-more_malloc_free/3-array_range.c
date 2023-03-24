#include <stdlib.h>
#include "main.h"
/**
* *array_range - a function that creates an array
*@min: argument
*@max: argument
*Return: not always 0
*/
int *array_range(int min, int max)
{
int *just;
int a, shim;

if (min > max)
return (NULL);
shim = max - min + 1;
just = malloc(sixeof(int) * shim);

if (just == NULL)
return (NULL);

for (a = 0; min <= max; a++)
just[a] = min++;
return (just);
}
