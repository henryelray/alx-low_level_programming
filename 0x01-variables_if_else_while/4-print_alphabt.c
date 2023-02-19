#include <stdio.h>
/**
 * main - Entry Point
 * Description: Program prints alphabets in lowercase except q and e
 * Return: Always (0 == Success)
*/
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
		{
			a++;
			continue;
		}
		else
		{
			putchar(a);
		}

	}
	return (0);
}
