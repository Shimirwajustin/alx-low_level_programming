#include "main.h"
#include <stdlib.h>

/**
*read_textfile - a function.
*@filename: a pointer.
*@letters: size_t
*Return: 0 0r c
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t a, b, c;
char *d;
if (filename == NULL)
return (0);
d = malloc(sizeof(char) * letters);
if (d == NULL)
return (0);
a = open(filename, O_RDONLY);
b = read(a, d, letters);
c = write(STDOUT_FILENO, d, b);
if (a == -1 || b == -1 || c == -1 || c != b)
{
free(d);
return (0);
}
free(d);
close(a);
return (c);
}
