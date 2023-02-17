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
for (c = 'a'; c <= 'z'; (c != 'q') || (c != 'e'); c++)
putchar (c);
return (0);
}
