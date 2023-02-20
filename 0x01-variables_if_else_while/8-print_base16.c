#include <stdio.h>
/**
 * main - Entry point
 * Description: Program prints all the numbers of base 16 in lowercase
 * Return: Always (0) (Success)
 */
int main(void)
{
	int a = 'a';

	int num = 0;

	while (num <= 9)
	{
		putchar('0' + num);
		num++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
