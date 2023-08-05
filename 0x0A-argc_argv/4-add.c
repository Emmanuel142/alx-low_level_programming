#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry of the program
 * Description: This function add the numbers in the terminal
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int n = 0;
	int j;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
			if (argv[i][j] < '0' ||  argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			}
			n += atoi(argv[i]);
		}
		printf("%d\n", n);
	}
	else
		printf("0\n");
	return (0);
}
