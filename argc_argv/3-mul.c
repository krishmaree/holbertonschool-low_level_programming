#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that multiplies two numbers
 * @argc: number of command line arguments
 * @argv: an array containing command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
