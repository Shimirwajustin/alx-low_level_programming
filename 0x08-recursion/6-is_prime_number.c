#include "main.h"
/**
*is_prime_number - a function
*@a: input
* @n: input
*Return: not always 0
*/
int actual_number(int n, int a);
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_number(n, n - 1));
}
/**
*actual_number - a function
*@n: input
*@a: input
*Return: not always 0
*/
int actual_number(int n, int a)
{
if (a == 1)
return (1);
if (n % a == 0 && a > 0)
return (0);
return (actual_number(n, a - 1));
}
