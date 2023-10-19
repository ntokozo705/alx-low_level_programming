#include <stdio.h>


/**
 * myfirst - apply the constructor attribute
 * Executed
 */
void myfirst(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before main
 *
 */


void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
