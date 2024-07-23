#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure to define a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Define a new type dog_t as a new name for the type struct dog */
typedef struct dog dog_t;

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees memory allocated for a dog
 * @d: Pointer to the dog to be freed
 */
void free_dog(dog_t *d);

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the dog to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: void
 */
void init_dog(dog_t *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to the dog to be printed
 *
 * Return: void
 */
void print_dog(dog_t *d);

#endif /* DOG_H */

