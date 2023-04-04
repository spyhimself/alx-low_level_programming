#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to be located
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start, *search;

	while (*haystack != '\0')
	{
		start = haystack;
		search = needle;

		while (*search == *haystack && *search != '\0' && *haystack != '\0')
		{
			search++;
			haystack++;
		}

		if (*search == '\0')
		{
			return (start);
		}

		haystack = start + 1;
	}

	return (NULL);
}
