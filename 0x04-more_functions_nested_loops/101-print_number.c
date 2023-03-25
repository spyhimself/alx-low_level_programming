#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: The integer to print
 */
void print_number(int n)
{
	int sign = 1;

	if (n < 0)
	{
		_putchar('-');
		sign = -1;
	}

	if ((n / 10) != 0)
	{
		print_number(sign * (n / 10));
	}

	_putchar(sign * (n % 10) + '0');
}
