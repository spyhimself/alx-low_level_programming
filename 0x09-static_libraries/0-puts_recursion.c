#include "main.h"

/**
 * _puts_recursion - prints a string followed
 * by a new line using recursion
 * @s: pointer to the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1); /* recursive case */
}
