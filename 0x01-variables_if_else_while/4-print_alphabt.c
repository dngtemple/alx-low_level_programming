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
if (letter != 'q' && letter != 'e')
{
putchar(letter);
letter++;
}
putchar ('\n');
}
return (0);
}
