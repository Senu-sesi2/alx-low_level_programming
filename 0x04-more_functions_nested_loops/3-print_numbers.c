#include "main.h"

/**
 * print_nimbers - print digits
 *
 * Return: one
 */
void print_numbers(void)
{
int n = 0;

while (n <= 9)
{
_putchar ('0' + n);
++n;
}
_putchar ('\n');
}
