#include "main.h"
#include <stdio.h>
/**
*print_line - void function
*@c: array
*@s: 1st integer
*@l: 2nd integer
*Return: no return
*/
void print_line(char *c, int s, int l)
{
int a, b;
for (a = 0; a <= 9; a++)
{
if (a <= s)
printf("%02x", c[l * 10 + a]);
else
printf(" ");
if (a % 2)
putchar(' ');
}
for (b = 0; b <= s; b++)
{
if (c[l * 10 + b] > 31 && c[l * 10 + b] < 127)
putchar(c[l * 10 + b]);
else
putchar('.');
}
}
/**
*print_buffer - void function
*@b: array
*@size: an integer
*Return: no return
*/
void print_buffer(char *b, int size)
{
int d;
for (d = 0; d <= (size - 1) / 10 && size; d++)
{
printf("%08x: ", d * 10);
if (d < size / 10)
{
print_line(b, 9, d);
}
else
{
print_line(b, size % 10 - 1, d);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}
