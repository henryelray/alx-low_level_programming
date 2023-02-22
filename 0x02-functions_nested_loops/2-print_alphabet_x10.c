#include "main.h"
/**
 * main - Entry point of program
 * Description: prints 10 times the alphabet, in lowercase
 * Return: Always (0 == Success)
*/
int main(void)
{
	int i;

	for (i = 1; i <= 10 ; i++)
	{
		int j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	return (0);
}
