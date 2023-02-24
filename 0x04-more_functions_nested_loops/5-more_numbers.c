#include <stdio.h>
#include "main.h"

/*betty style*/
/**
*void more_numbers - a function that prints 10 times the numbers
*Return: void
*/
void more_numbers(void)
{
int a;
int b;
for (a = 0; a < 10; a++)
{
for (b =0; b <= 14; b++)
{
if (b > 9)
_putchar((b / 10) + '0');
_putchar((b % 10) + '0')
}
_putchar('\n');
}
}
