#include <stdio.h>
#include <stdlib.h>
/**
*main - function
*@argc: integer
*@argv: an array
*Return: 1 & 0
*/
int main(int argc, char *argv[])
{
int a, b = 0, c = 0;
char d[] = "Error", *e;
if (argc > 1)
{
for (a = 1; a < argc; a++)
{
e = argv[a];
while (*e != 0)
{
if (*e < 47 || *e > 57)
{
printf("%s\n", d);
return (1);
}
e++;
}
c = atoi(argv[a]);
b += c;
}
printf("%d\n", b);
}
else
printf("%d\n", 0);
return (0);
}

