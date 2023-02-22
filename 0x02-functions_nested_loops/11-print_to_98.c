#include "main.h"
#include <stdio.h>

/* betty style doc for function main goes there */
/**
*print_to_98 - function to print natural numbers
*@n: function parameter
*
*Return: Always 0
*/
void print_to_98(int n)
{
int i;
if (n >= 0 && n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
printf(",");
printf(" ");
}
printf("\n");
}
else if (n < 0)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
printf(",");
printf(" ");
}
printf("\n");
}
else if (n > 98)
{
for (i = n; i >= 98; i++)
{
printf("%d", i);
printf(",");
printf(" ");
}
printf("\n");
}
else if (n == 98)
printf("%d", n);
printf(",");
printf(" ");
}
