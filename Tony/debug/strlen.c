#include "main.h"
/**
* _strlen - finds the length of a string
* @s : the string to be measured
*
* Return: The length of the string.
*/


int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}
