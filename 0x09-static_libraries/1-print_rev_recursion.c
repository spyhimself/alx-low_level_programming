#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: pointer to the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		return;
	}
	_print_rev_recursion(s + 1); /* recursive case */
	_putchar(*s);
}
