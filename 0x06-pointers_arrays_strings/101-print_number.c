#include "main.h"
/**
*print_number - void function
*@n: an integer
*Return: no return
*/
void print_number(int n)
{
unsigned int a;
if (n < 0)
{
a = -n;
_putchar('-');
}
else
{
a = n;
}
if (a / 10)
print_number(a / 10);
_putchar((a % 10) + '0');
}
