#include <stdio.h>
#include <stdlib.h>


/**
 * main - multiplies ywo numbers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, mu1 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);


	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		mu1 = num1 * num2;
		printf("%d\n", mu1);

	}
}	return (0);
