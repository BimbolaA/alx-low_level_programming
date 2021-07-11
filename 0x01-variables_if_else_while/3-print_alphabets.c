#include <studio.h>

/**
 *main - entry point
 *Description - prints alphabet
 *Return: returns an integer
 */
int main(void)
{
char aphabet_lowercase, alphabet_uppercase, newline;

alphabet_lowercase = 'a';
alphabet_uppercase = 'A';
newline = '\n';

while (alphabet_lowercase <= 'z')
{
putchar (alphabet_lowercase);
alphabet_lowercase++;
}
while (alphabet_uppercase <= 'Z')
{
putchar(alphabet_uppercase);
alphabet_uppercase++;
}
putchar(newline);

return (0);
}
