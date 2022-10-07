#include <stdlib.h>

/**
 * malloc_checked - creates apointer with malloc
 * @b: the size of the memory
 * Return: a void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
