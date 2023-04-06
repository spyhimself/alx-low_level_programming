#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n,
 * or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* error case */
	{
		return (-1);
	}
	if (n == 0 || n == 1) /* base case */
	{
		return (n);
	}
	return (helper(n, 1, n)); /* recursive case */
}

/**
 * helper - finds the natural square root of a number using binary search
 * @n: the number to find the square root of
 * @start: the starting index for the search
 * @end: the ending index for the search
 *
 * Return: the natural square root of n,
 * or -1 if n does not have a natural square root
 */
int helper(int n, int start, int end)
{
	int mid;

	if (end >= start)
	{
		mid = (start + end) / 2;
		if (mid * mid == n) /* found the natural square root */
		{
			return (mid);
		}
		else if (mid * mid > n) /* search in the left half */
		{
			return (helper(n, start, mid - 1));
		}
		else /* search in the right half */
		{
			return (helper(n, mid + 1, end));
		}
	}
	return (-1); /* natural square root does not exist */
}
