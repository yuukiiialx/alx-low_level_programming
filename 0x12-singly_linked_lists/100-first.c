#include <stdio.h>
#include <stdlib.h>

/**
 * pre_main - Constructor function to print a message before main.
 */
void pre_main(void) __attribute__((constructor));

void pre_main(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

