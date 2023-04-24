#include "main.h"
/**
*factorial - a function
*@n: an integer
*Return: 1 and n
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n + factorial(n - 1));
}
