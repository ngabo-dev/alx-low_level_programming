#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhe
		llo world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	str = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
