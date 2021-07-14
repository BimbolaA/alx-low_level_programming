#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * containing a copy of given parameters
 * @str: string to duplicate
 * Return: pointer to the duplicate string
 */

char *_strdup(char *str)
{
char *str_copy;
int i = 0, size = 0;

if (str == NULL) /* validate string input */
return (NULL);

while (*(str + i))
size++, i++; /* add null terminator to size */
size++;

str_copy = maloc(sizeof(char) * size); /* allocate memory */

if (str_copy == NULL) /* validate memory */
return (NULL);

i = 0;
while (i < size)
{
*(str_copy + i) = *(str + i);
i++;
}

return (str_copy);
}
