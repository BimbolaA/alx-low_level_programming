#include "holberton.h"

/**
 * memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @d: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int d);
{
char *ptr = dest;

while (d--)
*dest++ = *src++;
return (ptr);
}
