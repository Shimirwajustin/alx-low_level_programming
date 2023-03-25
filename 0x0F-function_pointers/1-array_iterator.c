#include <stdio.h>
#include "function_pointers.h"
/**
*array_iterator - a function
*@array: array of integer
*@size: number of elements to be printed
*@action: pointer
*Return: return nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a;
if (array == NULL || action == NULL)
return;
for (a = 0; a < size; a++)
{
action(array[a]);
}
}
