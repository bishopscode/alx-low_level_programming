#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Description: Prints the name of the program without removing the path.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Unused parameter */
	printf("%s\n", argv[0]);
	return (0);
}

