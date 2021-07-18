#include "holberton.h"

/**
 * _pow_recursion - returns the value raised to a certain power
 * @x: number to be raised to power
 * @y: power of x
 * Return: result of x**y
 */
int _pow_recursion(int x, int y)
{
if (y >= 0)
{
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
else
return (-1);
}
