#include <stdio.h>

void printMessage(void) __attribute__((constructor));

/**
* printMessage -  prints You're beat! and yet, you must
* allow,\nI bore my house upon my back!\n before
* the main function is executed.
*
*/

void printMessage(void)
{
	printf("You're beat! and yet, you must allow,\n");
 30  printf("I bore my house upon my back!\n");
}
