#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: Pointer to the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	putchar('\n');
}
