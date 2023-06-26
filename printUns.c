#include "main.h"

/**
 * printUns - function that handle u
 * @var: arg1
 * @length: arg2
 * @i: arg3
 * Return: void
 */

void printUns(unsigned int var, int *length, int *i)
{
	char result;

	if (var == 0)
	{
		(*i)++;
		return;
	}
	printUns(var / 10, length, i);
	result = (var % 10) + '0';
	write(1, &result, 1);
	(*length)++;
}
