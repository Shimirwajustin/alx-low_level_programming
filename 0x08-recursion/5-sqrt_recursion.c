#include "main.h"
int recursion(int n, int a);
/**
*_sqrt_recursion - a function
*@n: integer
*Return: -1 and function
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (recursion(n, 0));
}
/**
*recursion - a function
*@n: 1st integer
*@a: 2nd integer
*Return: -1, a and function
*/
int recursion(int n, int a)
{
if (a * a > n)
return (-1);
if (a * a == n)
return (a);
return (recursion(n, a + 1));
}
