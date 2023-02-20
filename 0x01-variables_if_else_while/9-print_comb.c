#include <stdio.h>
/**
 * main - Entry point
 * Description: Code prints all possible combinations of single-digit numbers
 * Return: Always (0) (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
