#include "main.h"
#include <stdio.h>
/**
*_pow_recursion - a function
*@x: input
*@y: input
*Return: not alwaays 0
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
int resurt = power(x, y);
_putchar(result);
}
return (0);
}
