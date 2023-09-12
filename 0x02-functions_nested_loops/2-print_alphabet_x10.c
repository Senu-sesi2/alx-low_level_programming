#include "main.h"

/**
 * print_alphabet_10 - print lowercase alphabet 10 times
 *
 * Return: function returns 0
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; ++i)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
