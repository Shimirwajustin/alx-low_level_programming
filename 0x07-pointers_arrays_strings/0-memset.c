#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_memset -a function that fills memory with a constant byte.
*@s: the address memory
*@b: byte
*@n: bytes of the memory area
*Return: nothing
*/
char *_memset(char *s, char b, unsigned int n)
{
memset(s, 'b', sizeof(char) * n);
}
