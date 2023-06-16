#include "main.h"
#include <stdlib.h>
/**
 *count_word - a function
 *@s: an array
 *Return: not always 0
 */
int count_word(char *s)
{
int a, b, c;
a = 0;
c = 0;
for (b = 0; s[b] != '\0'; b++)
{
if (s[b] == ' ')
a = 0;
else if (a == 0)
{
a = 1;
c++;
}
}
return (c);
}
