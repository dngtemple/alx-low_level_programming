#include "main.h"
#include <stdio.h>
/**
 * print_array - prints all elements of an array
 * @n: number of elements
 * @a: pointer to array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n ; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
}
