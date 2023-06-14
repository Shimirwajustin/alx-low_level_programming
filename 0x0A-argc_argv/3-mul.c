#include <stdio.h>
#include <stdlib.h>

/**
*main - function
*@argc: integer
*@argv: array
*Return: 1 or 0
*/
int main(int argc, char *argv[])
{
int a = 0;
char b[] = "Error";
if (argc != 3)
{
printf("%s\n", b);
return (1);
}
a = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", a);
return (0);
}
