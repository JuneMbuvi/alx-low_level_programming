#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: previous pointer
 * @old_size: previous size
 * @new_size: new size to be reallocated
 * Return: newp
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *newp, *oldp;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
		free(ptr);
	return (NULL);
	if (!ptr)
		return (malloc(new_size));

	/*if all these conditions fail, we can now reallocate*/
	newp = malloc(new_size);
	if (!newp)
		return (NULL);

	oldp = ptr;
	if (new_size > old_size)
	{
		i = 0;
		while (i < old_size)
		{
			newp[i] = oldp[i];
			i++;
		}
	}
	if (new_size < old_size)
	{
		i = 0;
		while (i < new_size)
		{
			newp[i] = oldp[i];
			i++;
		}
	}
	/*if either one of the last 2 conditions check, free ptr and return the newp*/
	free(ptr);
	return (newp);
}
