#include <stdio.h>
#include <stdlib.h>
/**
*main - function
*@argc: argument
*@argv: array
*Return: always 0 in main
*/
int main(int argc, char *argv[])
{
int just, a;
char *shim;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
just = atoi(argv[1]);

if (just < 0)
{
printf("Error\n");
exit(2);
}
shim = (char *)main;

for (a = 0; a < just; a++)
{
if (a == just - 1)
{
printf("%02hhx\n", shim[a]);
break;
}
printf("%02hhx", shim[a]);
}
return (0);
}
