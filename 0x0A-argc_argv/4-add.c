#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string are digit
 * @str: array str
 *
 * Return: Always 0 upon success
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str))/*count string*/

	{
		if (!isdigit(str[count])) /*check if str are digit*/

		{
			return(0);
		}

		count++;
	}
	return (1);
}
/**
 * main - program that adds positive numbers
 * @argc: number of arguments
 * @argv: strings of arguments
 *
 * Return: Always 0 upon success
 */

int main(int argc, char *argv[])

{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*condition if one of the number conatains sysmbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
