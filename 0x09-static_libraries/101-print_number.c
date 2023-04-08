#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int divisor = 1, digit, is_negative = 0;

	if (n < 0)
	{
		_putchar('-');
		is_negative = 1;
	}

	while ((n / divisor) >= 10 || (n / divisor) <= -10)
		divisor *= 10;

	while (divisor > 0)
	{
		digit = (n / divisor) % 10;
		if (is_negative)
			_putchar(-digit + '0');
		else
			_putchar(digit + '0');
		divisor /= 10;
	}
}
