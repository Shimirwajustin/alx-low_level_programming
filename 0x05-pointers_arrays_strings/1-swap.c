/**
*swap_int - a function that takes a pointer
*@a: first variable to be swaped
*@b: second variable to be swaped
* return: void
*/
void swap_int(int *a, int *b)
{
int c = *a;
int d = *b;
*a = d;
*b = c;
}
