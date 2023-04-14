#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string to concatenate with s2.
 * @s2: string to concatenate with s1.
 * @n: number of bytes of s2 to concatenate with s1.
 *
 * Return: pointer to the concatenated string
 * (s1 followed by first n bytes of s2)
 *         NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + len1))
		len1++;
	while (*(s2 + len2))
		len2++;
	if (n >= len2)
		n = len2;
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; *(s1 + i); i++)
		*(str + i) = *(s1 + i);
	for (j = 0; j < n; j++, i++)
		*(str + i) = *(s2 + j);
	*(str + i) = '\0';
	return (str);
}
