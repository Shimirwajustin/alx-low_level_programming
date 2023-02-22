#include "main.h"

/* betty style doc for function main goes there */
/**
*print_sign - function that prints signs
*
*@n: function parameter
*
*Return: 1, 0 and -1
*/
int print_sign(int n)
{
 if (n > 0)
{
_putchar('+');
_putchar(',');
_putchar(' ');
return (1);
}
else if (n == 0)
{
_putchar('0');
_putchar(',');
_putchar(' ');
return (0);
}
else (n < 0)
{
_putchar('-');
_putchar(',');
_putchar(' ');
return (-1);
}
}
