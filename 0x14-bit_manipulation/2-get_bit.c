#include "main.h"
#include <stdio.h>
/**
*get_bit - a function
*@n: long integer
*@index: integer
*Return: a and 1
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int a;
if (index > 64)
return (-1);
a = n >> index;
return (a & 1);
}
