#include <stdio.h>

/**
 * main - print lowercase alphabet
 * Return: program returns 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
