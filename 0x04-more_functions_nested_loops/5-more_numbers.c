#include "main.h"

/**
 * more_numbers - print 10 times 0 to 14
 */

void more_numbers(void)
{
int times;
int a;

for (times = 0; times <= 9; times++)
{
for (a = 0; a <= 14; a++)
{
_putchar(a);
_putchar('\n');
}
}
}
