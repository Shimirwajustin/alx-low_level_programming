#include "main.h"
int prime(int n, int a);
/**
*is_prime_number - a function
*@n: an integer
*Return: 0, 1 and a function
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime(n, n - 1));
}
/**
*prime - function
*@n: 1st integer
*@a: 2nd integer
*Return: 0, 1 and function
*/
int prime(int n, int a)
{

if (a == 1)
return (1);
if (n % a == 0 && a > 0)
return (0);
return (prime(n, a - 1));
}
