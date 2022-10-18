#include "main.h"

/**
 * print_last_digit - draws adiagonal lines according parameter
 * @n: integer params
 */
void print_last_digit(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i <= x; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
