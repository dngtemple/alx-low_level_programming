#include "main.h"

/**
 * print_to_98 - printing natural nubers to 98
 * @n: first number to be printed
 */

void print_to_98(int n)
{

for (n = 0; n <= 98; n++)
{
_putchar('0' + n);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
