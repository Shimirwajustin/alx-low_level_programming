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
if (array && cmp)
{
for (int i = 0; i < size; i++)
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
