#include <stdio.h>
#include "main.h"

/**
 * main - print the names of the program
 * @agrc: number of arguments in the command line
 * @agrv: array of strings in the arguments
 *
 * Return: Always 0 upon success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
