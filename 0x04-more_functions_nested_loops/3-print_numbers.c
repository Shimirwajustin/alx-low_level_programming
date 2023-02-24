#include <stdio.h>
#include "main.h"

/*betty style*/
/**
*print_numbers - function to print the numbers from 0 to 9
*Return: void
*/
void print_numbers(void)
{
int b;
for (b >= 0; b <= 9; b++)
{
_putchar(b + '0');
}
_putchar('\n');
}
