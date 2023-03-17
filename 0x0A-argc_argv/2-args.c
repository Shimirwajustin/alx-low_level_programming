#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*main - function
*@agrc: an argument
*@argv: an argument of array
*Return: always 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
