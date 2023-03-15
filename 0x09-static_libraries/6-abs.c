#include "main.h"
/* betty style doc for function main goes there */
/**
*_abs - checks for absolute value
*
*@n: parameter to be checked
*
*Return: always n
*/
int _abs(int n)
{
if (n < 0)
n = -(n);
else if (n >= 0)
n = n;
return (n);
}
