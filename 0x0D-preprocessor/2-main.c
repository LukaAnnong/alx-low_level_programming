#include <stdio.h>
#include "main.h"

/**
 * main - A program prints name of the file compiled from and a new line.
 *
 * Return: Returns 0 on sucessful exit.
 */

int main(void)
{
	char file[] = __FILE__;
	int count = 0;

	while (count < 80)
	{
		if (file[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(file[count]);
			count++;
		}
	}
	return (0);
}
