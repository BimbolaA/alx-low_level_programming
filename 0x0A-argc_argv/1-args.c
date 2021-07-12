#include "holberton.h"
#include <stdio.h>

/**
 * main - prints number of arguement
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
int sum = 0;

(void)argv;
while (--argc)
sum++;
printf("%i\n", sum);
return (0);
}
