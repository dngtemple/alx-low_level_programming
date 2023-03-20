#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - function to create a new dog
 * @name: pointer to name of dog
 * @age: age of dog in struct
 * @owner: pointer to  owner of dog
 *
 * Return: void
 *         NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *dog;

dog = malloc(sizeof(struct dog));

if (dog == NULL)
{
return (NULL);
}

dog->name = name;
dog->age = age;
dog->owner = owner;

}


