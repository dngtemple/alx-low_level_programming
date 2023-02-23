#include "main.h"

/**
 * _isupper - checking if a character is uppercase
 * @c: character to be checked
 *
 * Return: 0 if success
 *         1 if failure
 */


int _isupper(int c)
{
if ( c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
