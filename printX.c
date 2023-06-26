#include "main.h"

/**
 * printX - function that handle X
 * @var: arg1
 * @len: arg2
 * @i: arg3
 * Return: void
 */

void printX(unsigned int var, int *len, int *i)
{
	char ch1, ch2;
	int digit;

	if (var == 0)
	{
		(*i)++;
		return;
	}
	printX(var / 16, len, i);
	digit = var % 16;
	ch1 = digit + '0';
	ch2 = digit + 'A' - 10;

	(digit < 10) ? write(1, &ch1, 1) : write(1, &ch2, 1);
	(*len)++;

}
