#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to make changes
 * @argc: number of arguments
 * argv: array of stirngs
 *
 * Return: 0 upon success, 1 upon Error
 */
int main(int argc, char *argv[])
{
	int num, e, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (e = 0; e < 5 && num >= 0; e++)
	{
		while (num >= coins[e])
		{
			result++;
			num -= coins[e];
		}
	}

	printf("%d\n", result);
	return (0);
}
