#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to append
 *
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates two strings
 * @dest: string to append to
 * @src: string to append
 * @n: maximum number of characters to be appended
 *
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies a string
 * @dest: destination buffer
 * @src: source string
 * @n: maximum number of characters to copy
 *
 * Return: pointer to destination buffer
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: difference between s1 and s2
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to modify
 *
 * Return: modified string
 */
char *string_toupper(char *s);

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: modified string
 */
char *cap_string(char *s);

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: encoded string
 */
char *leet(char *s);

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *s);

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n);

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: pointer to result or 0 if result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 */
void print_buffer(char *b, int size);

#endif /* MAIN_H */
