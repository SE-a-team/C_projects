#include <stdio.h>
#include "Edozie.h"
#include <math.h>

/**
 * square_root - This takes a number from
 * the user and calculates the sqrt
 * Return: Always 0
 */

int main(void)
{
	float num, square;

	printf("Enter a number: ");
	scanf("%f", &num);

	square = pow(num, 0.5);

	printf("Square Root = %f", square);
	return (0);
}
