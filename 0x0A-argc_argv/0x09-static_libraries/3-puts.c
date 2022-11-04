#include "main.h"
/**
 * _puts - check the code to print the string.
 * @str: String to be printed out.
 * Return: Always 0.
 */
void _puts(char *str)
{
int t;

for (t = 0; str[t] != 0; t++)
_putchar(str[t]);
_putchar('\n');
}
