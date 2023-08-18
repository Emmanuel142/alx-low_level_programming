#include "variadic_functions.h"
/**
 * print_numbers - this function is used to print back
 * the argument passed into it
 * @separator: seperating symbols
 * @n: number of parameter
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (seperator != NULL)
			printf("%s", seperator);
	}
	va_end(ap);
}
