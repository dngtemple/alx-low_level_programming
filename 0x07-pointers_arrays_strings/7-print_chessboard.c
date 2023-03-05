#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - printing chess boaurd
 * @a: char
 */

void print_chessboard(char (*a)[8])
{
int i;

int b;

for (i = 0; i <= 8; i++)
{
for (b = 0; b <= 8; b++)
{
putchar(a[i][b]);
}
putchar('\n');
}
}
