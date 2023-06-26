#include "main.h"

/**
 * printOctal - function that handle o
 * @var: arg1
 * @length: arg2
 * Return: void
 */
void printOctal(unsigned int var, int *length)
{
	char result;

	if (var == 0)
		return;
	printOctal(var / 8, length);
	result = (var % 8) + '0';
	write(1, &result, 1);
	(*length)++;
}
