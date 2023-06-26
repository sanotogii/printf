#include "main.h"

/**
 * printUns - function that handle u
 * @var: arg1
 * @length: arg2
 * @i: arg3
 * @test_nb: arg4
 * Return: void
 */

void printUns(unsigned int var, int *length, int *i, int test_nb)
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
	printUns(var / 10, length, i, test_nb);
	result = (var % 10) + '0';
	write(1, &result, 1);
	(*length)++;
}
