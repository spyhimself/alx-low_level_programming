#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int factor = 2;
	unsigned long int largest_factor = 0;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			largest_factor = factor;
			num /= factor;
			while (num % factor == 0)
			{
				num /= factor;
			}
		}
		factor++;
	}
	printf("%lu\n", largest_factor);
	
	return (0);
}
