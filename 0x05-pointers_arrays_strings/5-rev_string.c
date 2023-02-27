#include "main.h"
#include <stdio.h>

/**
 *rev_string - a function to reverse a string
 *@s: character
 * Return: Always 0.
 */
void rev_string(char *s)
{
int a;
int leng = 0;
int b;
while (s[leng] != '\0')
leng++;
leng = leng - 1;
a = 0;
while (a < leng)
{
b = s[a];
s[a] = s[leng];
s[leng] = b;
a++;
leng--;
}
}
