#include "main.h"
/**
*puts2- a function that print only one character
*@str:string
*return: void
*/
void puts2(char *str)
{
int long = 0;
int a = 0;
char *b = str;
int c;
while (*b != '\0')
{
b++;
long++;
}
a = long - 1;
for (c = 0; c <= a; c++)
{
if (c % 2 == 0)
{
_putchar(str[c]);
}
}
_putchar('\n');
}
