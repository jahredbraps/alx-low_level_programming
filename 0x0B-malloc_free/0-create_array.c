#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initialize with specific char
 * @size: size of array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	if (size == 0)
		return (NULL);

	m = malloc(size * sizeof(*m));
	if (m == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		m[i] = c;

	return (m);
}
