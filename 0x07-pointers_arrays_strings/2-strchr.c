#include "holberton.h"

/**
 * strchr - locates a chatracter in a string
 * @c: terget charater
 * @s: string to be serached
 * Return: pointer to first occurence of c or NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (c == *s)
{
return (s);
}
s++;
}
if (!c)
return (s);
return (NULL);
}
