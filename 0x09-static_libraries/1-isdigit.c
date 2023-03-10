#include "main.h"

/**
 * _isdigit - checking if c is digit
 * @c: character to be check
 *
 * Return: 0 is success
 *         1 is failure
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
