#include "main.h"
#include <stdlib.h>
/**
**array_range - a function
*@min: integer 1
*@max: integer 2
*Return: not alway 0
*/

int *array_range(int min, int max)
{
int *a, b, c;
if (min > max)
return (NULL);

c = max - min + 1;
a = malloc(sizeof(int) * c);
if (a == NULL)
return (NULL);

for (b = 0; min <= max; b++)
a[b] = min++;
return (a);
}
