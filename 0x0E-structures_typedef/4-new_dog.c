#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;

    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);

    d->name = name;
    d->age = age;
    d->owner = owner;

    return (d);
}
