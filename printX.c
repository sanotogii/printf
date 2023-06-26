#include "main.h"

/**
 * printX - function that handle X
 * @var: arg1
 * @len: arg2
 * @i: arg3
 * @test_nb: arg4
 * Return: void
 */

void printX(unsigned int var, int *len, int *i, int test_nb)
{
	char ch1, ch2;
	int digit;

	if (var == 0)
	{
		if (test_nb == 0)
		{
			write(1, "0", 1);
			(*len)++;
		}
		(*i)++;
		return;
	}
	test_nb = 1;
	printX(var / 16, len, i, test_nb);
	digit = var % 16;
	ch1 = digit + '0';
	ch2 = digit + 'A' - 10;

	(digit < 10) ? write(1, &ch1, 1) : write(1, &ch2, 1);
	(*len)++;

}
