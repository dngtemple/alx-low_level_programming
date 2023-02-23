#include "main.h"

/**
 * print_line - printing a straight line
 * @n: number of times
 *
 * Return: void
 */

void print_line(int n)
{
int line;

for (line = 0; line <= n; line++)
{
_putchar('_');
}
_putchar('\n');
}
