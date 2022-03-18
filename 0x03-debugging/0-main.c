#include "main.h"

/**
 * main - main
 * Return: 0
 */

void positive_or_negative(int n)/**n is a psitive or negative number*/
{

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
}

int main(void)
{
	int i;

	i = 0;

	positive_or_negative(i);
	return (0);
}
