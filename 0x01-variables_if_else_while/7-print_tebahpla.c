#include <stdio.h>
/**
 * main - Entry point
 * Description: Program print the alphabets in lowercase reverse form
 * Return: Always (0) (Success)
 */
int main(void)
{
	int a = 'z';

	while (a <= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
