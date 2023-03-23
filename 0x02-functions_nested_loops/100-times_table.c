#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: the number whose times table we want to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= 10; i++)
		printf("%d x %d = %d\n", i, n, i * n);
}
