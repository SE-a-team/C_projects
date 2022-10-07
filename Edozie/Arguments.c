#include <stdio.h>


/**
 * main: Entry point
 * Return - 0
 */

int main(int argc, *argv[])
{
	int i;

	printf("Number of arguments = %d\n", (argc - 1));
	printf("Arguments:\n");

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
