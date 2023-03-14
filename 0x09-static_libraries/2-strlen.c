/**
* _strlen - a function that returns the length of a string
*@s: a variable used to measure length
* Return: Always 0.
*/
int _strlen(char *s)
{
int leng;
leng = 0;
while (*s != '\0')
{
leng++;
s++;
}
return (leng);
}
