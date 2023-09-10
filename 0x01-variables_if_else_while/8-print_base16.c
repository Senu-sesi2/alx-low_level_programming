#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase
 * Return: program returns 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar (n % 10 + '0');
		n++;
	}

	n = 97;
	while (n <= 102)
	{
		putchar (n);
		n++;
	}
	putchar ('\n');
	return (0);
}
