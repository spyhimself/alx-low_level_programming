#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer that stores the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0, i, j;
	char *tmp, *res;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	tmp = r;
	res = r;

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--, tmp++)
	{
		sum = carry + (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0);
		*tmp = (sum % 10) + '0';
		carry = sum / 10;
	}

	if (carry)
	{
		if (size_r <= len1 + 1 || size_r <= len2 + 1)
			return (0);
		*tmp = carry + '0';
	}
	else
	{
		tmp--;
	}

	for (; tmp >= res; res++, tmp--)
	{
		*res ^= *tmp;
		*tmp ^= *res;
		*res ^= *tmp;
	}

	return (r);
}
