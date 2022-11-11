#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 *malloc_checked - A function that allocates memory using malloc
 *@b: a variable that holds the input
 *Return: The address is returned.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
