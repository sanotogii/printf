#include "main.h"

/**
 * printOctal - function that handle o
 * @var: arg1
 * @length: arg2
 * @i: arg3
 * Return: void
 */
void printOctal(unsigned int var, int *length, int *i)
{
	char result;

	if (var == 0)
	{
		(*i)++;
		return;
	}
	printOctal(var / 8, length, i);
	result = (var % 8) + '0';
	write(1, &result, 1);
	(*length)++;
}
