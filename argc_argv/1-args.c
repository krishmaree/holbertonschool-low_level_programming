#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: an array contatining the command line arguments
 *
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d/n", argc - 1);

	return (0);
}
