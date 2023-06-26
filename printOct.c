#include "main.h"

/**
 * printOctal - function that handle o
 * @var: arg1
 * @length: arg2
 * @i: arg3
 * @test_nb: arg4
 * Return: void
 */
void printOctal(unsigned int var, int *length, int *i, int test_nb)
{
	char result;

	if (var == 0)
	{
		if (test_nb == 0)
		{
			write(1, "0", 1);
			(*length)++;
		}
		(*i)++;
		return;
	}
	test_nb = 1;
	printOctal(var / 8, length, i, test_nb);
	result = (var % 8) + '0';
	write(1, &result, 1);
	(*length)++;
}
