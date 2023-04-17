#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen_recursion - find the length of a string
 * @s: string to compute the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog if it succeeds, NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;
	int len1, len2, i;
	/* Check if name and owner are not NULL */
	if (name == NULL || owner == NULL)
		return (NULL);
	/* Allocate memory for the new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	len1 = _strlen_recursion(name); /* find length of name */
	new_name = malloc(len1 + 1); /* allocate memory for new_name */
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		new_name[i] = name[i]; /*copy mame to the allocated memory */
	new_name[len1] = '\0'; /* assign the null terminator at the end */
	len2 = _strlen_recursion(owner); /* find length of owner's name */
	new_owner = malloc(len2 + 1); /* allocate memory */
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		new_owner[i] = owner[i]; /* copy owner's name to the allocated memory */
	new_owner[len2] = '\0'; /* assign the null character */
	/* Initialize */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
