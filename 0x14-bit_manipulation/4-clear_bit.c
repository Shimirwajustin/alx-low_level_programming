#include "main.h"
#include <stdio.h>
/**
*clear_bit - a function
*@n: unsigned integer
*@index: integer
*Return: 1 but not always
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int a;
unsigned int b;
if (index > 64)
return (-1);
b = index;
for (a = 1; b > 0; a *= 2, b--)
;
if ((*n >> index) & 1)
*n -= a;
return (1);
}
