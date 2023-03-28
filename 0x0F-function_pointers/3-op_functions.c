#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
*op_add - function of addition
*@a: integer
*@b: inter
*Return: return sum
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
*op_sub - function of difference
*@a: integer
*@b: integer
*Return: return difference
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
*op_mul - calculates the product
*@a: integer
*@b: integer
*Return: return product
*/
int op_sub(int a, int b)
{
return (a * b);
}
/**
*op_div - function of division
*@a: integer
*@b: integer
*Return: return division
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
*op_mod - function of modulo
*@a: integer
*@b: integer
*Return: return of modulo
*/
int op_mod(int a, int b)
{
return (a % b);
}
