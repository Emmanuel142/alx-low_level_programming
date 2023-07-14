#include <stdio.h>
#include <string.h>
/**
 * main - Entry point of the program
 * Description: This function prints to the screen
 * without using printf and puts
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t len = strlen(message);
	fwrite(message, sizeof(char), len, stdout);
	return (0);
}
