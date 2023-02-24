#include <stdio.h>

/**
 * main - printing fizz buzz
 *
 * Return: 0 Always
 */

int main(void)
{
int num;

for (num = 0; num <= 100; num++)
{
if (num % 3 == 0)
{
printf("Fizz ");
}
if (num % 5 == 0)
{
printf("Buzz ");
}
if  (num % 15 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", num);
}
}
printf("\n");
return (0);
}
