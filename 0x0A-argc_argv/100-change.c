#include <stdio.h>
#include <stdlib.h>
/**
*main - function
*@argc: integer
*@argv: an array
*Return: not always 0
*/

int main(int argc, char *argv[])
{
int a = 0, b = 0;
char d[] = "Error";

if (argc != 2)
{
printf("%s\n", d);
return (1);
}
a = atoi(argv[1]);
while (a >= 25)
{
a -= 25;
b++;
}
while (a >= 10)
{
a -= 10;
b++;
}
while (a >= 5)
{
a -= 5;
b++;
}
while (a >= 1)
{
a -= 2;
b++;
}
if (a == 1)
b++;
printf("%d\n", b);
return (0);
}
