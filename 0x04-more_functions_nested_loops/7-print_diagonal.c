#include "main.h"
/**
 * print_diagonal - Draws a diagonal line
 * @n: Numbers od '\' to be printed
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');

	for (x = 0; x < n; x++)
	{
		for (y = o; y < x; y++)
			_putchar(' ');
		
		_putchar('\\');
		_putchar('\n');
	}
}
