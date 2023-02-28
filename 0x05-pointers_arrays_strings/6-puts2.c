#include "main.h"

/**
* puts2 - function should print only one character
* @str: string
* Return:  void
*/

void puts2(char *str)
{
int rango = 0;
int a = 0;
char *b = str;
int c;
while (*b != '\0')
{
b++;
rango++;
}
a = rango - 1;
for (c = 0 ; c <= a ; c++)
{
if (c % 2 == 0)
{
_putchar(str[c]);
}
}
_putchar('\n');
}
