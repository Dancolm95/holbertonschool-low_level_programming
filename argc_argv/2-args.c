#include <stdio.h>

/**
 * main - Program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Zero if succesful
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
