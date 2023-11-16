#include <stdio.h>

void primary_code(void) __attribute__ ((constructor));

/**
 * primary_code - runs before the main function
 */

void primary_code(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

