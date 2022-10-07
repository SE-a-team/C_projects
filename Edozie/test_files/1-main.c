#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 1000;
    printf("n=%d\n", n);
    update(&n);
    printf("n=%d\n", n);
    return (0);
}
