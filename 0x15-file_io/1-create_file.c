#include "main.h"

/**
*create_file - a function.
*@filename: it point to the file.
*@text_content: it point to a string.
*Return: -1 or 1
*/
int create_file(const char *filename, char *text_content)
{
int a, b, c = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (c = 0; text_content[c];)
c++;
}
a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
b = write(a, text_content, c);
if (a == -1 || b == -1)
return (-1);
close(a);
return (1);
}
