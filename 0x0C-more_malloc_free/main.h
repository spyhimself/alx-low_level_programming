#ifndef MAIN_H
#define MAIN_H

/* putchar - writes the character c to stdout */
int _putchar(char c);

/* malloc_checked - allocates memory using malloc */
void *malloc_checked(unsigned int b);

/* string_nconcat - concatenates two strings */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* _calloc - allocates memory for an array */
void *_calloc(unsigned int nmemb, unsigned int size);

/* array_range - creates an array of integers */
int *array_range(int min, int max);

/* _realloc - reallocates a memory block */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* MAIN_H */
