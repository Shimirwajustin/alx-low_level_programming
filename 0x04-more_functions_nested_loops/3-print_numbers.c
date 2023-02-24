#include <stdio.h>
#include "main.h"

/*betty style*/
/**
*print_numbers - function to print the numbers from 0 to 9
*Return: always 0
*/
void print_numbers(void)
{
int b;
for (b >= 0; b <= 9; b++)
{
_putchar(b);
}
_putchar('\n');
return (0);
}
