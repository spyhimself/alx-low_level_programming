#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

 	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len - 1) / 2 + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
