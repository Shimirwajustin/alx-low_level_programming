#include "main.h"
#include <stdio.h>
/**
*flip_bits - a function
*@n: long integer
*@m: integer
*Return: integer
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int a;
int b;
a = n ^ m;
b = 0;
while (a)
{
b++;
a &= (a - 1);
return (b);
}
