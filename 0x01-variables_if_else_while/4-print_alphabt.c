#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter == 'q')
{
continue;
}
if (letter == 'e')
{
continue;
}
putchar(letter);
}
putchar ('\n');

return (0);
}
