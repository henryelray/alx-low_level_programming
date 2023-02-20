#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * Description: prints all possible different combinations of two digits
 * Return: Always (0 =  Success)
 */
int main(void)
{
	int n, num1, num2;

	n = 0;

	while (n <= 90)
	{
		num1 = n / 10;
		num2 = n % 10;

		if (num1 >= num2)
		{
			n++;
			continue;
		}
		putchar(num1 + '0');
		putchar(num2 + '0');
		if (n != 89)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
