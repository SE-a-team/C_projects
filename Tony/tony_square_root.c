#include "tony.h"
#include <stdio.h>
#include <math.h>

/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
float number;
float root;

	printf("Enter your number:\n");
	scanf("%f", &number);

	root = pow(number, 0.5);

	printf("The Square Root= %f\n", root);

return (0);

}
