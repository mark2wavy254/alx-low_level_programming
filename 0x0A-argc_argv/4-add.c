#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers passed to it
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int z;
	unsigned int i, sum = 0;
	char *a;

	if (argc > 1)
	{
		for (z = 1; z < argc; z++)
		{
			a = argv[z];

			for (i = 0; i < strlen(a); i++)
			{
				if (a[i] < 48 || a[i] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(a);
			a++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
