#include <stdio.h>
/**
 * main - print single digit base number 10 starting from 0
 * Return: program returns 0
 */
int main(void)
{
	char n = '0';

		while (n <= '9')
		{
			putchar (n);
			n++;
		}
		putchar ('\n');
		return (0);
}
