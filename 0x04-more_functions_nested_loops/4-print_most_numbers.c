#include <stdio.h>
#include "main.h"

/*betty style*/
/**
*print_most_numbers - function to print the numbers except 2 and 4
*Return: void
*/
void print_most_numbers(void)
{
int b;
for (b = 0; b <= 9; b++)
{
if ((b == 2) || (b == 4))
{
continue;
}
else
_putchar(b + '0');
}
_putchar('\n');
}
