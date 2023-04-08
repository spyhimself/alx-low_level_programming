#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept: pointer to a string containing the characters to be accepted
 *
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int accept_char[256] = {0};

	while (*accept != '\0')
	{
		accept_char[(unsigned char)*accept] = 1;
		accept++;
	}

	while (*s != '\0' && accept_char[(unsigned char)*s])
	{
		count++;
		s++;
	}

	return (count);
}
