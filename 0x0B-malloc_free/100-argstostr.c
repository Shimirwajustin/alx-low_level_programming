#include "main.h"
#include <stdlib.h>
/**
*argstostr - a function
*@ac: an argument
*@av: an argument of array
*Return: 0
*/
char *argstostr(int ac, char **av)
{
int a, b, c = 0, d = 0;
char *just;
if (ac == 0 || av == NULL)
return (NULL);

for (a = 0; a < ac; a++)
{

for (b = 0; av[a][b]; b++)
d++;
}
d += ac;
just = malloc(sizeof(char) * a + 1);
if (just == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
just[c] = av[a][b];
c++;
}
if (just[c] == '\0')
{
just[c++] = '\n';
}
}
return (just);
}
