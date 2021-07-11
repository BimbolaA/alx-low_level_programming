#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entry point
 *Description - uses printf
 *Return: returns an integer
 */
int main(void)
{
int n;
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %i is ", n, lastDigit);

if (lastDigit > 5)
printf("greater than 5\n");
else if (lastDigit == 0)
printf("0\n");
else
printf("less than 6 and not 0\n");

return (0);
}
