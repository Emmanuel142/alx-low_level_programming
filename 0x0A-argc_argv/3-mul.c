#include <stdio.h>
/**
 * main - this function multiply input form the command line
 * @argc: the argument count
 * @argv: the argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int n;

	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
			i *= argv[n];
		printf("%d\n", i);
	}
	else
		printf("Error\n");
}
