#include "main.h"

/**
 * print_last_digit - draws adiagonal lines according parameter
 * @n: The number of times to print diagonal lines
 *
 * * Return: empty
 */
void print_last_digit(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');

		}
	}
}	
