#include "tony.h"
#include <stdio.h>
#include <math.h>

/**
* main - entry point
*
* Return: 0
*/
int main(void);
{

int number;
int root;

	printf("Enter your number:\n");
	scanf("%d", &number);

	root = pow(number, 0.5);

	printf("The Square Root =%d", root);

return (0);

}
