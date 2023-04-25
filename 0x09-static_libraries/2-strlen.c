#include "main.h"
/**
 *_strlen - a function
 *@s: pointer
 *Return: integer
 */
int _strlen(char *s)
{
int a;
a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
