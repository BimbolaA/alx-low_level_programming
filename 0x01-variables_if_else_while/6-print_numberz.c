#include <stdio.h>

/**
 *main - entry point
 *Return: returns an integer
 */
int main(void)
{
int n;

n = '0';
while (n <= '9')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
