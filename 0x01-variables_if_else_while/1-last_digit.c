#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is %d %s\n", n, n % 10,
			((n % 10) == 0) ? "and is 0"
			: (((n % 10) > 5) ? "and is greater than 5"
				: "and is less than 6 and not 0"));
	return (0);
}
