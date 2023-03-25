#include "function_pointers.h"
/**
*int_index - function
*@array: an array
*@size: argument
*@cmp: pointer
*Return: -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int a;
if (array && cmp)
{
for (a = 0; a < size; a++)
{
if (cmp(array[a]) != 0)
return (1);
}
}
return (-1);
}
