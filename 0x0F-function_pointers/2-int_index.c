#include <stdlib.h>
#include "function_pointers.h"
/**
*int_index- a function
*@array: 1st pointer
*@size: integer
*@cmp: 2nd pointer
*Return: 0 or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int a;
if (array && cmp)
{
for (a = 0; a < size; a++)
if (cmp(array[a]) != 0)
return (a);
}
return (-1);
}
