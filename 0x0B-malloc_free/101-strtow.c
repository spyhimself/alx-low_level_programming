#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The number of words in @str.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}

		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str is NULL or contains no words - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 *         Each element of this array should contain a single word,
 *         null-terminated. The last element of the returned array
 *         should be NULL.
 */
char **strtow(char *str)
{
	char **words;
	int count, i, j, len, start;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = count_words(str);
	words = malloc(sizeof(char *) * (count + 1));

	if (words == NULL)
		return (NULL);

	i = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;

		if (*str == '\0')
			break;

		start = str - str;
		len = 0;
		while (*str && *str != ' ')
		{
			str++;
			len++;
		}

		words[i] = malloc(sizeof(char) * (len + 1));

		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		strncpy(words[i], (str - len), len);
		words[i][len] = '\0';
		i++;
	}

	words[i] = NULL;
	return (words);
}
