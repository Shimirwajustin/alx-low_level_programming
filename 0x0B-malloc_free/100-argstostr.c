#include <stdlib.h>
#include "main.h"
/**
**argstostr - a function
*@ac: integer
*@av: array
*Return: no return
*/
char *argstostr(int ac, char **av)
{
int a, b, c = 0, d = 0;
char *e;

if (ac == 0 || av == NULL)
return (NULL);
a = 0;
while (a < ac)
{
b = 0;
while (av[a][b])
{
d++;
b++;
}
d++;
a++;
}
e = malloc((sizeof(char) * d) + 1);
if (e == NULL)
return (NULL);
a = 0;
while (a < ac)
{
b = 0;
while (av[a][b])
{
e[c] = av[a][b];
b++;
c++;
}
e[c] = '\n';
c++;
a++;
}
e[c] = '\0';
return (e);
}
