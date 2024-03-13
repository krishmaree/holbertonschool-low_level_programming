#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints its name
 * @argc: number of command-line arguments
 * @argv: an array containing the command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (i < argc)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
