#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - a function
*@str: pointer that points to the character
*Return: not always 0
*/
char *_strdup(char *str)
{
char *j;
int s, t = 0;
if (str == NULL)
return (NULL);
s = 0;
while (str[s] != '\0')
s++;
j = malloc(sizeof(char *) * (s + 1));
if (j == NULL)
return (NULL);
for (t = 0; str[t]; t++)
j[t] = str[t];
return (j);
}
