#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
int a;

while (a < 10)
{
putchar(48 + a);
if (a != 9)
{
putchar(',');
putchar(' ');
}
a++;
}
putchar('\n');

return (0);
}

