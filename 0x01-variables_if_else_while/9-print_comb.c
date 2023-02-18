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
for (c = 0; c < 10; c++)
putchar (c + '0');
putchar (',');
putchar (' ');
putchar ('\n');
return (0);
}
