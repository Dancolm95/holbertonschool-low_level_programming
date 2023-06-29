#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints that multiplies two numbers
 * @argc: Number of the arguments
 * @argv: number of the strings in the table
 *
 * Return: if the program does not receive two arguments - 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
