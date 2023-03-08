#include "main.h"

/**
 * _pow_recursion - return value of x to be power of y
 * @x: value to be raised
 * @y: value to raise to
 * Return: 0
 *         1
 *         _pow_recursion
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 1)
{
return (x);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
