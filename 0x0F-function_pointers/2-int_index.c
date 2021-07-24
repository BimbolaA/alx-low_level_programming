#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *int_index - searches for an integer
 *@array: pointer to array
 *@size: number of element in array
 *@cmp: function pointer
 *Return: index of the firdt element
 *for which the cmp fucntion deos not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
if (atrray != NULL && cmp != NULL)
for (i = 0; i < size; i++)
{
if (cmp(aray[i]))
return (i);
}
return (-1);
}
