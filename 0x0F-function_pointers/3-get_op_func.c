#include "3-calc.c"
#include <stdio.h>
#include <stdlib.h>

/**
 *get_op_func - selects the appropriate function
 *@s: argument
 *Return: a pointer to the corresponding function
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (op[i].op != NULL)
{
if (*s == *ops[i].op)
return (ops[i].f);
i++;
}
return (NULL);
}
