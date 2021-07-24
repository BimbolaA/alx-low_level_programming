#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - adds two integers
 *@a: interger 1
 *@b: integer 2
 *Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub - subtarcts two integers
 *@a: integer 1
 *@b: integer 2
 *Return: diff of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul - multiplies integers
 *@a: integer 1
 *@b: integer 2
 *Return: Multiplied integer
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 *op_div - divides integer
 *@a: integer 1
 *@b: integer 2
 *Return: division
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 *op_mod - remainder of division
 *@a: integer 1
 *@b: integer 2
 *Return: remainder
 */
int op_mod(int a, int b)
{
return (a % b);
}
