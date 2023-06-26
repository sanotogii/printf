#include "main.h"

/**
* to_binary - ENTRYPOINT
* @var: constant
* @len: second param
* @i: third second
* Return: 0 success or uint
*/
void to_binary(unsigned int var, int *len, int *i)
{
	char ch;

	if (var / 2)
		to_binary(var / 2, len, i);
	if (var / 2 == 0)
		(*i)++;
	ch = var % 2 + '0';
	write(1, &ch, 1);
	(*len)++;
}
