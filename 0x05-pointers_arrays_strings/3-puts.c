#include "main.h"

/**
 * _puts - printing to stdout
 * @str: string to be printed
 */

void _puts(char *str)
{


while (str[0] != '\0')
{
_putchar(str[0]);
}
_putchar('\n');

}
