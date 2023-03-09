#include "main.h"
#include <stdio.h>
#include <math.h>
/**
*_sqrt_recursion - a function
*@n: input
*Return: not always 0
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (_sqrt_recursion(n, 0));
}
