#include <stdio.h>
/**
 * main - passing parameter to main function
 * Description: this print the name of the code to the output
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always return 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
