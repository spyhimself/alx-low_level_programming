#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a string to standard error
 *
 * Return: 1
 */

int main(void)
{
	char *str;

	str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str, 59);
	return (1);
}
