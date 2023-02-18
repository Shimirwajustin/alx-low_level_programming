#include <stdio.h>
#include <string.h>
/**
* main - Prints the alphabet
*
* Return: 0 when code executes succesfully
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar (c);
}
putchar ('\n');
return (0);
}
