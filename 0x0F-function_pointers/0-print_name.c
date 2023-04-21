#include <stdlib.h>
#include "function_pointers.h"
/**
*print_name - a function
*@name: 1st pointer
*@f: 2nd pointer
*/
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
else
f(name);
}
