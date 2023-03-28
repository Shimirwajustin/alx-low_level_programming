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
int bytes, i;
char *shim;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
shim = (char *)main;
for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", shim[i]);
break;
}
printf("%02hhx ", shim[i]);
}
return (0);
}
