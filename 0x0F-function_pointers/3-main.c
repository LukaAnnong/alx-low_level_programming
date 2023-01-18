#include "3-calc.h"
#include <stdio.h>
#include <string.h> /*for atoi*/
#include <stdlib.h> /*for exit*/

/**
 * main - Program Entry
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0-on success
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	/* Error if arguments are not 4 with the executable */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]); /*if argument is string convert to number*/
	num2 = atoi(argv[3]); /* as stated above */
	operator = argv[2];

	/* Error if operator is not null or a 2d array '\*' */
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));
}
