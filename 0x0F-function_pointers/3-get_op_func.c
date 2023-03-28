#include "3-calc.h"
#include <stdlib.h>
/**
*get_op_func - function pointer
*@s: the operator
*Return: return pointer
*/
int (*get_op_func(char *s))(int, int)
{
opt_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int t;
t = 0;
while (ops[t].op != NULL && *(ops[t].op) != *s)
t++;
return (ops[t].f);
}
