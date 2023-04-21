#include <stdlib.h>
#include "function_pointers.h"
/**
*array_iterator - a function
*@array: 1st pointe
*@size: size
*@action: 2nd pointer
*Return: no return in void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (!array || !action)
return;
for (unsigned int a = 0; a < size; a++)
action(array[a]);
}
