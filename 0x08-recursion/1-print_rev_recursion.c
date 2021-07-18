#include "holberton.h"

/**
 * _puts_recursion - prints a reversed string.
 * @s: string to be printed
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
