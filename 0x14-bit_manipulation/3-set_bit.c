#include "main.h"

/**
*set_bit - a function
*@n: unsigned integer
*@index: integer
*Return: 1 but not always
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int a;
if (index > 64)
return (-1);
for (a = 1; index > 0; index--, a *= 2)
;
*n += a;
return (1);
}
