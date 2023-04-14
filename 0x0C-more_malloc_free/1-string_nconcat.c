#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: String to be appended to
 * @s2: String to append
 * @n: Number of bytes from s2 to append
 *
 * Return: Pointer to the concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat_str = malloc(sizeof(char) * (len1 + n + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		concat_str[i] = s2[j];
		i++;
	}

	concat_str[i] = '\0';

	return (concat_str);
}
