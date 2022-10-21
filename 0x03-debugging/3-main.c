#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 365 - day);
	printf("Invalid date: %02d/%02d%04d\n", month, day - 31, year);
	printf("Invalid data: %d\n", day);
	printf("Remaining days: %d\n", 365 - day);
	return (0);
}
