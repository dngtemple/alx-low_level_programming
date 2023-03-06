#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of two diagonal
 * of a square matrix
 * @size: size
 * @a: integer
 */

void print_diagsums(int *a, int size)
{
int diag1;
int diag2;
int ini;

for (ini = 0; ini < size * size; ini += (size + 1))
{
{
diag1 += a[ini];
}
for (ini = size - 1; ini < (size * size) - (size - 1); ini += (size - 1))
{
diag2 += a[ini];
}
}
printf("%d %d\n", diag1, diag2);
}

