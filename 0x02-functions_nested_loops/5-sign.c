#include "main.h"

/* betty style doc for function main goes there */
/**
*_isalpha - alphabet function
*
*putchar:print the sign
*Return: Always 0
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
else if (n < 0)
{
_putchar('-');
_putchar(',');
_putchar(' ');
return (-1);
}
}
