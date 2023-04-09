#include <stdio.h>
#include <string.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments passed to the program
 * @argv: Array of pointers to strings containing the command-line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *program_name = argv[0];
	char *last_slash = strrchr(program_name, '/');

	if (last_slash != NULL)
	{
		program_name = last_slash + 1;
	}

	printf("%s\n", program_name);

	return (0);
}
