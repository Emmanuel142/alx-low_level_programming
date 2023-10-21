#include<stdio.h>

/**
 * myPersonalStartUp - Apply the constructor attribute to myPersonalStartUp() so that it
 *   is executed before main()
 */
void myPersonalStartUp(void) __attribute__ ((constructor));

/**
 * myPersonalStartUp - implementation of myPersonalStartUp
 */
void myPersonalStartUp(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
