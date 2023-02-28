#include "main.h"

/**
*puts2 - a function that prints every other character of a string
*@str: string
* Return: void.
*/
void puts2(char *str)
{
int leng = 0;
int a = 0;
while (str[leng] != '\0')
leng++;
while (a < leng)
{
_putchar(str[0]);
a = a + 2;
}
-putchar('\n');
}
