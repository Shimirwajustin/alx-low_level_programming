#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main - function
*@argc: integer
*@argv: array
*Return: 1 or 0
*/
int main(int argc, char *argv[])
{
int a;
char b[];
a = 0;
b[]= "Error";
if (argc != 3)
{
printf("%s", b);
printf("\n");
return 1;
}
a = atoi(argv[1]) * atoi(argv[2]);
printf("%i", a);
printf("\n");
return 0;
}

