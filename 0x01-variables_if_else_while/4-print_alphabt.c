#include <stdio.h>
/**
 * main - print lowercases alphabet
 * except q and e
 * Return: program returns 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar ('\n');
	return (0);
}
