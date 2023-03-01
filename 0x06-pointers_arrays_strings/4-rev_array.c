#include "main.h"

/**
 * reverse_array - reversing array
 * @a: array
 * @n: number of elements
 */


void reverse_array(int *a, int n)
{
int i;
int c;

for (i = 0; (i < (n - 1) / 2); i++)
{
c = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = c;
}
}
