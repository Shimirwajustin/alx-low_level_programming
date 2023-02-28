#include "main.h"
/**
*puts2 - a function should print only one character
*@str: string
*return: void
*/
void puts2(char *str)
{
int leng = 0;
int a = 0;
char *y = str;
int b;
while (*y != '\0')
{
y++;
leng++;
}
a = leng - 1;
for (b = 0; b <= a; b++)
{
if (b % 2 == 0)
_putchar(str[0]);
a = a + 2;
}
_putchar('\n');
}
