#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * strlenfn - measures length of strings name and owner
 * @s: string to be measured
 * Return: length i
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copies a string from src to dest
 * @dest: final/new location
 * @src: initial location
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		src[i] = dest[i];
	}
	/*Terminating the '\0'*/
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: pointer to name and owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	p = malloc(sizeof(dog_t));
	if (!p)
		return (NULL);
	p->name = malloc(sizeof(char) * (len1 + 1));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(sizeof(char) * (len2 + 1));
	if (p->owner == NULL)
	{
		free(p);
		free(p->name);
		return (NULL);
	}
	_strcpy(p->name, name);
	_strcpy(p->owner, owner);
	p->age = age;

	return (p);
}
