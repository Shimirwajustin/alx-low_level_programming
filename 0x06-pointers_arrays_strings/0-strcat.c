#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strcat - a function that concatenates two strings.
*@dest: string
@src: string
* Return: dest.
*/
char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
dest[a++] = src[b++];
}
dest[a] = '\0';
return dest;
}
