#include <stdo.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char str[100];
	int i = 0;

	printf("Enter your string: ");
	fgets(str, 100, stdin);

	for (; i < str[i]; i++)
	{
		printf("%c\n", str[i]);
	}
	return (0);
}
