#include <stdio.h>
/**
 * main - Entry point
 * Description: Program print the alphabets in lowercase
 * Return: Always (0) (Success)
 */
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	return (0);
}
