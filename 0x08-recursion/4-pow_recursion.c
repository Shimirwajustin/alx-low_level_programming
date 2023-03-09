#include "main.h"
#include <stdio.h>
#include <math.h>
/**
*_pow_recursion - a function
*@x: input
*@y: input
*Return: not alwaays 0
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _power_recursion(y - 1));
}
