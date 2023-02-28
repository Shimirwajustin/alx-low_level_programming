#include "main.h"

/**
 *puts2 - a function that prints every other character of a string, starting with the first character.
 *@str: string
 * Return: void.
 */
void puts2(char *str)
{
int leng, a;
leng = 0;
a = 0;
while (str[leng] != '\0')
leng++;
while (a < leng)
{
_putchar(str[0]);
a = a + 2;
}
}
