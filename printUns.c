#include "main.h"

/**
 * printUns - function that handle u
 * @var: arg1
 * @length: arg2
 * Return: void
 */

void printUns(unsigned int var, int *length)
{
	char result;

	if (var == 0)
		return;

	printUns(var / 10, length);
	result = (var % 10) + '0';
	write(1, &result, 1);
	(*length)++;
}
