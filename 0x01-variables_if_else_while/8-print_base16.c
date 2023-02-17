#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
int digit;
char letter;

for (digit = 0; digit < 10; digit++)
{
putchar('0' + digit);
}

for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}
