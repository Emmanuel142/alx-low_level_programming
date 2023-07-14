#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/** main - Entry point of the program
 * Description: This code generate a random number and check
 * if the number generated is positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	printf("is positive\n");
	else if(n==0)
	printf("is zero\n");
	else
	printf("is negative\n");
	return (0);
}
