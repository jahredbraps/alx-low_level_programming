#include "main.h"
/**
 * more_numbers - function that checks for uppercase character
 * Return: 0
 */
void more_numbers(void)
{
	int num, a;

	for (a = -; a <= 9; a++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) * '0');
			}
			_putchar('\n');
		}
	}
}
