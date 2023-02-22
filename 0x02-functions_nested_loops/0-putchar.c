#include "main.h"
/**
 * main - Entry point of program
 * Description: program that prints _putchar, followed by a new line.
 * Return: Always (0 == Success)
*/

int main(void)
{
	int i = 1;

	char word[8] = "_putchar";

	_putchar('_');

	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
