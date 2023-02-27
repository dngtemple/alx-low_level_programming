#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: character
 */

void print_rev(char *s)
{
int i = 0;
int n;

while (s[i] != '\0')
{
n++;
}

for (i = n - 1; i <= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}


