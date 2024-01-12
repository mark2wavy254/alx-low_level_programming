#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of this program
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
