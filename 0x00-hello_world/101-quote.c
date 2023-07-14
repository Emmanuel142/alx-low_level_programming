#include <stdio.h>
#include <string.h>
/**
 * main - Entry point of the program
 * Description -this function print to the standard output without using 
 * printf and puts
 * Result - return 0;
 */
int main(void)
{

	const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t len = strlen(message);
	fwrite(message, sizeof(char), len, stdout);
	return (0);
}
