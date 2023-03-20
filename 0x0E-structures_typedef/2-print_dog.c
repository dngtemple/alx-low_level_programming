#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 *
 * Return: void
 */


void print_dog(struct dog *d)
{
if (d != NULL)
{
if ((*d).name == NULL)
{
printf("Name: (nil)");
}
else
{
printf("Name: %s\n", (*d).name);
}
if ((*d).age == '\0')
{
printf("Age: (nil)");
}
else
{
printf("Age: %f\n", (*d).age);
}
if ((*d).owner == NULL)
{
printf("Onwer: (nil)");
}
else
{
printf("Onwer: %s\n", (*d).owner);
}
}
}
