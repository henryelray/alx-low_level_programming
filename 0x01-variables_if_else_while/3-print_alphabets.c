#include <stdio.h>
/**
 * main - main function entry point
 * Description: Program prints the alphabet in lowercase, and then in uppercase
 * Return: Always (0 == Success)
 */
int main(void)
{
	int a = 'a';

	int b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);

}
