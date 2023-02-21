#include <stdio.h>

/**
 *print_alphabet - print the alphabets in lowercase followed by a newline
 *
 * main-Entry point
 *
 * Return:0 Always
 */


void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}

int main(void)
{
print_alphabet();

return (0);
}
