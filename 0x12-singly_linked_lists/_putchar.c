#include <unistd.h>

/**
 * _putchar - writes character s to standard output
 * @s: Character to be printed
 *
 * Return: 1 when successful
 * and, -1 on error, errno is set appropriately.
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}

