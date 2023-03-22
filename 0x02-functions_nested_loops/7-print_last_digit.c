#include "main.h"
#include <limits.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: integer to be checked
 *
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n == INT_MIN)
		return (-1);
	else if (n < 0)
		return (-n);
	else
		return (n);
}

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	n = _abs(n);
	last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
