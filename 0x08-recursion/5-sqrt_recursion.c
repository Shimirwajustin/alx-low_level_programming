#include "main.h"
#include <stdio.h>
#include <math.h>
/**
*_sqrt_recursion - a function
*@n: input
*@a: input
*Return: not always 0
*/
int actual_sqrt_recursion(int n, int a);
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}
/**
*actual_sqrt_recursion - a function that
*recurses to find the square root of
*natural number
*@n: input
*@a: input
*@a: input
*Return: square root
*/
int actual_sqrt_recursion(int n, int a)
{
if (a * a > n)
return (-1);
if (a * a == n)
return (a);
return (actual_sqrt_recursion(n, a + 1));
}
