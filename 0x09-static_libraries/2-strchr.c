/**
*_strchr - a function
*@s:input
*@c: input
*Return: always 0
*
*/
char *_strchr(char *s, char c)
{
int a;
for (; s[a] >= '\0'; a++)
{
if (s[a] == c)
return (&s[a]);
}
return (0);
}
