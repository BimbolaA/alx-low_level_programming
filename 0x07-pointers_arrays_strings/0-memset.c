#include "holberton.h"

/**
 * _memset - fills memory with constant byte
 * @i: memory area
 * @k: constant byte
 * @j: bytes of memory area i
 */
char *_memset(char *i, char k, unsigned int j)
{
char *ptr = i;

while (j--)
*i++ = k;
return (ptr);
}
