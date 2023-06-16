#include "main.h"
#include <stdlib.h>
/**
 *count_word - a function
 *@s: an array
 *Return: not always 0
 */
char **strtow (char *str)
{
int a, b, c;
a = 0;
c = 0;
for (b = 0; str[b] != '\0'; b++)
{
if (str[b] == ' ')
a = 0;
else if (a == 0)
{
a = 1;
c++;
}
}
return (c);
}
