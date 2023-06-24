#include "main.h"

/**
* to_binary - ENTRYPOINT
* @var: constant
* @l: second param
* Return: 0 success or uint
*/
void to_binary(unsigned int var, int *l)
{
	char ch;

	if (var / 2)
		to_binary(var / 2, l);
	ch = var % 2 + '0';
	write(1, &ch, 1);
	(*l)++;
}
