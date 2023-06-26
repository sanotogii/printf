#include "main.h"

/**
 * printhex - function that handle x
 * @var: arg1
 * @len: arg2
 * Return: void
 */

void printhex(unsigned int var, int *len)
{
	char ch1, ch2;
	int digit;

	if (var == 0)
		return;
	printhex(var / 16, len);
	digit = var % 16;
	ch1 = digit + '0';
	ch2 = digit + 'a' - 10;

	(digit < 10) ? write(1, &ch1, 1) : write(1, &ch2, 1);
}