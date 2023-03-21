#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - function
*@s1: An array of character
*@s2: An array of character
*Return:  not always 0
*/
char *str_concat(char *s1, char *s2)
{
char *t;
int j, c;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
j = c = 0;
while (s1[j] != '\0')
j++;
while (s2[c] != '\0')
c++;
t = malloc(sizeof(char) * (j + c + 1));
if (t == NULL)
return (NULL);
j = c = 0;
while (s1[j] != '\0')
{
t[j] = s1[j];
j++;
}
while (s2[c] != '\0')
{

t[j] = s2[c];
j++, c++;
}
t[j] = '\0';
return (t);
}
