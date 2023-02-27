/**
*swap_int - a function that takes a pointer
*@a: integer
*@b: integer
* return: void
*/
void swap_int(int *a, int *b)
{
_putchar("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
_putchar("a=%d, b=%d\n", a, b);
return (0);
}
