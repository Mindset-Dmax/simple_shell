#include <stdio.h>
#include <stdlib.h>
#include "s-shell.h"

/**
 * sum - adding two integers
 *
 * @a: The value of a
 * @b: The value of b
 *
 * Return: It will return a+b
 */
int sum(int a, int b)
{
	return (a + b);
}

/**
 * main - check the code
 *
 * @x: The value 1
 * @y: The value 2
 * @z: The total of x and y
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;
	int y;
	int z;

	printf("Enter first number: ");
	scanf("%d\n", &x);
	printf("Enter second number: ");
	scanf("%d\n", &y);

	z = sum(x, y);

	printf("Sum of the enetred numbers: %d\n", z;
	return (0);
}
