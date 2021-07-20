#include <stdio.h>
#include "dog.h"

/**
 * main - chaeck Holberton
 *
 * Return: Always 0
 */
int main(void)
{
struct dog my_dog;

my_dog.name = "Bingo";
my_dog.age = 4.5;
my_dog.owner = "Bimbola";
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}
