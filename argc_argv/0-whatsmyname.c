#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Write a program that prints its name
 * @argc: count arguments supplied to the program
 * @argv: array of pointers to the strings
 * Return: Zero if succesful
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
