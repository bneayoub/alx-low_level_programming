#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog.
 *
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: New dog struct or NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy = malloc(sizeof(dog_t));

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	doggy->name = strcpy(doggy->name, name);
	doggy->age = age;
	doggy->owner = strcpy(doggy->owner, owner);

	return (doggy);
}
