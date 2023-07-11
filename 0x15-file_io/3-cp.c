#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void closefile(int fd);
/**
*create_buff - a function.
*@file: a pointer.
*Return: a.
*/
char *create_buffer(char *file)
{
char *a;
a = malloc(sizeof(char) * 1024);
if (a == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (a);
}

/**
*closefile - a function.
*@fd: an integer.
*/
void closefile(int fd)
{
int b;
b = close(fd);
if (b == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
*main - a function.
*@argc: The integer.
*@argv: pointernof an array
*Return: 0
*Description: exit code 97. exit code 98. exit code 99. exit code 100.
*/
int main(int argc, char *argv[])
{
int a, b, c, d;
char *e;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
e = create_buffer(argv[2]);
a = open(argv[1], O_RDONLY);
c = read(a, e, 1024);
b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (a == -1 || c == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(e);
exit(98);
}
d = write(b, e, c);
if (b == -1 || d == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(e);
exit(99);
}
c = read(a, e, 1024);
b = open(argv[2], O_WRONLY | O_APPEND);
} while (c > 0);
free(e);
closefile(a);
closefile(b);
return (0);
}
