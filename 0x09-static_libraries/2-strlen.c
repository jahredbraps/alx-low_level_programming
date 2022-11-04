#include "main.h"

/**
 * _strlen - check the code for length.
 * @s: Inputted string pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int m;

	m = 0;

	while (s[m] != '\0')
		m++;

	return (m);
}
