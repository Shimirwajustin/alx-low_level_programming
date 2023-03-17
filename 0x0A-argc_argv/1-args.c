#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*main - a function
*@argc: argument
*@argv: argument
*Return:not always 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("argv[%d] = %s", i,argv[i]);
}
return(0);
}
