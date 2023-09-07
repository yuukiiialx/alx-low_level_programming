#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the previously allocated memory block.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The new size in bytes of the new memory block.
 *
 * Description: This function reallocates a memory block previously allocated
 * using malloc, changing its size to 'new_size' bytes. If 'ptr' is NULL, it
 * is equivalent to calling malloc(new_size)for memory allocation If 'new_size'
 * is 0 and 'ptr' is not NULL, it is equivalent to calling free(ptr)and returns
 * NULL. If memory allocation fails, the function returns NULL.
 *
 * Return: A pointer to the newly allocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)new_ptr + i) = *((char *) ptr + i);
			free(ptr);
			return (new_ptr);
		}
		else
			return (NULL);
	}
}
