#include <stdio.h>
#include "function_pointers.h"
/**
*print_name - function to print a name
*@name: a name to be printed
*@f: pointer
*Return: no return
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}