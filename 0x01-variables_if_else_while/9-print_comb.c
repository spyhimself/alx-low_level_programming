#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: A C program
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j == 9 ? '\n' : ',');
			putchar(' ');
		}
	}

	return (0);
}
