#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* 1_strncat - a function that concatenates two strings.
*@dest: string
*@src: string
*@n: integer
* Return: dest.
*/
char *_strncat(char *dest, char *src, int n)
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
return (dest);
}
