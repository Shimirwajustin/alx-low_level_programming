#include "main.h"
#include <stdlib.h>
/**
*cout_word - function
*@s: pointer
*Return: not always 0
*/
char **strtow(char *str)
int cout_word(char *s)
{
int shim, t, n;
shim = 0;
n = 0;
for (t = 0; str[t] != '\0'; t++)
{
if (s[t] == ' ')
shim = 0;
else if (shim == 0)
{
shim = 1;
n++;
}
}
return (n);
}

/**
* *shimwa - 2nd function
*@fid: array 1_D
*Return: not always 0
*/
char **shimwa(char *fid)
{
char **shimi, *justi;
int j, a = 0, length = 0, jul, b = 0, mic, en;
while (*(fid + length))
length++;

jul = cout_word(fid);
if (jul == 0)
return (NULL);

shimi = (char **) malloc(sizeof(char *) * (jul + 1));
if (shimi == NULL)
return (NULL);
for (j = 0; j <= length; j++)
{
if (fid[j] == ' ' || fid[j] == '\0')
{
if (b)
{
en = j;
justi = (char *) malloc(sizeof(char) * (b + 1));
if (justi == NULL)
return (NULL);
while (mic < en)
*justi++ = fid[mic++];
*justi = '\0';
shimi[a] = justi - b;
a++;
b = 0;
}
}
else if (b++ == 0)
mic = j;
}
shimi[a] = NULL;
return (shimi);
}

