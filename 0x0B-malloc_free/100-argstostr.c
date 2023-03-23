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
d = 0;
c = 0;
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
just = malloc((sizeof(char) * d) +1);
if (just == NULL)
return (NULL);
a = 0;
while (av[a][b])
{
b = 0;
while (av[a][b])
{
just[c] = av[a][b];
b++;
c++;
}
just[c] = '\n';
c++;
a++;
}
just[c] = '\0';
return (just);
}
