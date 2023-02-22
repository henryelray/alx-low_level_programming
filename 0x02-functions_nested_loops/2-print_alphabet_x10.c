#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: Always (0 == Success)
*/
void print_alphabet_x10(void)
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
}
