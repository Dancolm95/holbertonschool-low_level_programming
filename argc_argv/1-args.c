#include <stdio.h>

/**
 * main - Program that prints the number of arguments
 * @argc: number of arguments
 * @argv: address of a table containing the strings
 * Return: Zero if succesful
 */
int main(int argc, char _attribute_((_unused_)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
