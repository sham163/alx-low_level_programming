#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Description: _strcopy - copy the string
 * @src: string
 * @tes: copy string
 * Return: tes
 */

char *_strcopy(char *tes, char *src)
{
	int s;

	for (s = 0; src[s]; s++)
		tes[s] = src[s];
	tes[s] = '\0';

	return (tes);
}

/**
 * Description: new_dog - a function that create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!owner || !name || age < 0)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (strlen(name) + 1));

	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);

}
