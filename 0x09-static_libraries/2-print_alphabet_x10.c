#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
		letter = 'a';
	}
}
