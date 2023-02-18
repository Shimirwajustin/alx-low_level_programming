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
char j;
for (c = 0; c < 10; c++)
putchar (c);
for (j = 'a'; j <= 'f'; j++)
putchar (j);
putchar ('\n');
return (0);
}
