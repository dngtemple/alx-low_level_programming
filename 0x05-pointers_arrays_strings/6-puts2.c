#include "main.h"

/**
 * puts2 - printing every character of a string
 * @str: string
 */

void puts2(char *str)
{
int string = 0;

while (string != '\0')
{
string++;
}

if (string % 2 == 0)
{
_putchar(str[string]);
}

_putchar('\n');
}
