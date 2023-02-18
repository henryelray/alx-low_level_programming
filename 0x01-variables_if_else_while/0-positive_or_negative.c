#include <stdio.h>
/**
 * main - Entry point
 * Program  prints if number is positive or negative
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n = 98;

	if (n < 0)
	{
		printf("%d is negative", n);
	}
	else if (n > 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}

