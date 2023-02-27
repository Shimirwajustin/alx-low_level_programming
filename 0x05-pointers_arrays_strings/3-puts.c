/**
* _puts - a function that prints a string
*@str: a variable used to print string
* Return: str.
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar (*str);
str++;
}
_putchar ('\n');
}
